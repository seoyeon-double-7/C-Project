#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b, c;
	double avg=0;

	scanf_s("%d %d %d", &a, &b, &c);
	avg = (double)(a + b + c) / 3;

	printf("%d %d %d의 평균은 %.1f이다.", a, b, c, avg);
	return 0;
}