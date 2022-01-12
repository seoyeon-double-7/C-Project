#include <stdio.h>
#include <stdlib.h>
int main(void) {
	int *p, n;
	
	puts("number? "); scanf_s("%d", &n);
	p = (int*)malloc(sizeof(int) * n);

	if (p == NULL) printf("allocation error");

	for (int i = 0; i < n; i++) {
		printf("> %d. input : ", (i+1));
		scanf_s("%d", &p[i]);
	}

	for (int i = 0; i < n; i++) {
		printf("%d\t", p[i]);
	}

	free(p);
	return 0;
}