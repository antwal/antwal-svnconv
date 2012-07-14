#include "iFAT.h"

void function() 
{
	U8 rc;
	IFAT  aFat;
	P_BulkT pBulk;
	IFile fp;
	int   i,j,n;
	char  buf[512];
	ITIME iTime;

	for(i=0;i<512;i++)
	{
		buf[i]=i;	
	}

	if(iFAT_Init(&aFat) == TRUE)
	{
		iTime.year  = 2010;
		iTime.month = 3;
		iTime.date  = 3;
		iTime.hour  = 20;
		iTime.minute= 30;
		iTime.second= 0;
		iFAT_CreateFile(&aFat, &fp,"test.txt", &iTime);

		pBulk = iFAT_BulkWriteFile(&fp,40*1024*1024,&rc);

		if (pBulk != NULL)
		{
			for(n=0;n<10240;n++)
			{
				for(j=0;j<=7;j++)
				{
					if(iFAT_DoBulkWrite(pBulk, buf, 512) < 512)
					{
						break;
					}

				}	
			}
			iFAT_CloseFile(&fp);
		}
	}
}