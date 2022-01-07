#include <stdio.h>
extern int k;
void sub() {
	printf("\nsub %d", k);
	k = 4;
}