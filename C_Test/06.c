#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d과 %d의 차는 %d이다", a, b, (a - b));
	return 0;
}