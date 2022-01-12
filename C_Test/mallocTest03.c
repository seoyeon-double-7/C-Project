#include <stdio.h>
#include <stdlib.h>
int main(void) {
	double* ptr;
	double sum = 0;
	int num;

	printf("입력받을 수 :  ");
	scanf_s("%d", &num);
	ptr = (double*)malloc(sizeof(double) * num);

	if (ptr == NULL) printf("allocation error");

	for (int i = 0; i < num; i++) {
		printf("> %d. input : ", (i + 1));
		scanf_s("%lf", &ptr[i]);
	}

	for (int i = 0; i < num; i++) {
		sum += *(ptr + i);
	}


	printf("합계 : %.1lf", sum);

	free(ptr);
	return 0;
}