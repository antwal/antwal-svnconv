#!/bin/bash

source /opt/CVSTinyOS/tinyos-2.x-contrib/diku/env 
rm -rf ./build/
make cc2430em
echo "Make Done"

cd ./build/cc2430em
echo "Successfully changed to ./build/cc2430em"

if [[ ! -s ./app.c ]]
then
	exit
fi

env WINEPREFIX=/root/.wine.keil LC_ALL=en_US wine cmd /c ./startup.bat
echo "Done env"

vim -c "822,1335s/*YYYYY\ /\/*YYYYY\ /g" -c "wq" app.c
vim -c "%s/\");\}/\");\r}/g" -c "wq" app.c
#vim -c "5500s/=\ data/=\ _data/g" -c "wq" app.c
vim -c "%s/\*\ (uint16_t\ xdata\ \*)addr\ =\ data/ _data/g" -c "wq" app.c
#vim -c "%s/#define\ MANG/#pragma\ src\r#define\ MANG/g" -c "wq" app.c
#vim -c "%s/;}/;\r}/g" -c "wq" app.c
#vim -c "%s/__asm\ volatile\ (\"nop\");/#pragma\ asm\rNOP;\r#pragma\ endasm\r/g" -c "wq" app.c

cp /opt/CVSTinyOS/tinyos-2.x-contrib/diku/mcs51/support/make/mcs51/CC2430-F128.bat .
echo "Done Copying /opt/CVSTinyOS/tinyos-2.x-contrib/diku/mcs51/support/make/mcs51/CC2430-F128.bat ."



env WINEPREFIX=/root/.wine.keil LC_ALL=en_US wine cmd /c ./CC2430-F128.bat


#scp app.hex mahesh-desktop@192.168.51.62:/home/mahesh-desktop/Desktop/ub/
scp app.hex abhishek@192.168.51.44:/home/abhishek/AKS__online/
