/*-
 * Copyright (c) 1992, 1993
 *	The Regents of the University of California.  All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 * 3. All advertising materials mentioning features or use of this software
 *    must display the following acknowledgement:
 *	This product includes software developed by the University of
 *	California, Berkeley and its contributors.
 * 4. Neither the name of the University nor the names of its contributors
 *    may be used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE REGENTS AND CONTRIBUTORS ``AS IS'' AND
 * ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED.  IN NO EVENT SHALL THE REGENTS OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
 * OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
 * SUCH DAMAGE.
 */

 struct SortEntry {
     uint16_t id;
     uint8_t  receiveEst;
 };

int		cmp(const void *, const void *);
static char	*med3(char *, char *, char * );
static void	swapfunc(char *, char *, int);

size_t  boolean;

#define min(a, b)	((a) < (b) ? (a) : (b))


/*
 * Qsort routine from Bentley & McIlroy's "Engineering a Sort Function".
 */
#define swapcode(parmi, parmj, n) { 		\
	int i = (n) / sizeof (char); 			\
	register char *pi = (char *) (parmi); 		\
	register char *pj = (char *) (parmj); 		\
	do { 						\
		register char	t = *pi;		\
		*pi++ = *pj;				\
		*pj++ = t;				\
        } while (--i > 0);				\
}

static void
swapfunc(char *a, char* b, int n)
{
	swapcode( a, b, n)
}

#define swap(a, b) swapfunc(a, b, es)

#define vecswap(a, b, n) 	if ((n) > 0) swapfunc(a, b, n)

static char *
med3(char* a, char* b, char* c)
{
	return cmp(a, b) < 0 ?
	       (cmp(b, c) < 0 ? b : (cmp(a, c) < 0 ? c : a ))
              :(cmp(b, c) > 0 ? b : (cmp(a, c) < 0 ? a : c ));
}

void
quick_sort(void* a, size_t n, size_t es)
{
	char *pa, *pb, *pc, *pd, *pl, *pm, *pn;
	int d, r, swap_cnt, val;

	boolean = n;
	n = 6;   // NBR_TABLE_SIZE

  loop:
	swap_cnt = 0;
	if (n < 7) {
		for (pm = (char *)a + es; pm < (char *)a + n * es; pm += es){
			for (pl = pm; pl > (char *)a && cmp(pl-es,pl) > 0; pl -=es)
				swap(pl, pl - es);
		}	
		return;
	}
	pm = (char *)a + (n / 2) * es;
	if (n > 7) {
		pl = a;
		pn = (char *)a + (n - 1) * es;
		if (n > 40) {
			d = (n / 8) * es;
			pl = med3(pl, pl + d, pl + 2 * d);
			pm = med3(pm - d, pm, pm + d);
			pn = med3(pn - 2 * d, pn - d, pn);
		}
		pm = med3(pl, pm, pn);
	}
	swap(a, pm);
	pa = pb = (char *)a + es;

	pc = pd = (char *)a + (n - 1) * es;
	for (;;) {
		while (pb <= pc && (r = cmp(pb, a)) <= 0) {
			if (r == 0) {
				swap_cnt = 1;
				swap(pa, pb);
				pa += es;
			}
			pb += es;
		}
		while (pb <= pc && (r = cmp(pc, a)) >= 0) {
			if (r == 0) {
				swap_cnt = 1;
				swap(pc, pd);
				pd -= es;
			}
			pc -= es;
		}
		if (pb > pc)
			break;
		swap(pb, pc);
		swap_cnt = 1;
		pb += es;
		pc -= es;
	}
	if (swap_cnt == 0) {  /* Switch to insertion sort */
		for (pm = (char *)a + es; pm < (char *)a + n * es; pm += es)
			for (pl = pm; pl > (char *)a && cmp(pl - es, pl) > 0;
			     pl -= es)
				swap(pl, pl - es);
		return;
	}

	pn = (char *)a + n * es;
	r = min(pa - (char *)a, pb - pa);
	vecswap(a, pb - r, r);
	r = min(pd - pc, pn - pd - es);
	vecswap(pb, pn - r, r);
	if ((r = pb - pa) > es)
		quick_sort(a, r / es, es);
	if ((r = pd - pc) > es) {
		/* Iterate rather than recurse to save stack space */
		a = pn - r;
		n = r / es;
		goto loop;
	}
/*		quick_sort(pn - r, r / es, es, cmp);*/
}

// Change this compare function according to  need of the protocol
int cmp(const void *x, const void *y) {
   
		uint8_t xFreqUsage, yFreqUsage;
		
 		dozer_parent_t *nx = (dozer_parent_t *) x;
		dozer_parent_t *ny = (dozer_parent_t *) y;

	if(!boolean){
		xFreqUsage = nx->flag;		//INVALID_VALID
		yFreqUsage = ny->flag;

	} else {
		xFreqUsage = nx->beacon.hopcount;  //HC
		yFreqUsage = ny->beacon.hopcount;
	}

		if (xFreqUsage > yFreqUsage) 	return -1;
		if (xFreqUsage == yFreqUsage) 	return 0;
		if (xFreqUsage < yFreqUsage)	return 1;

		return 0; // shouldn't reach here becasue it covers all the cases
}

