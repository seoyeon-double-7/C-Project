#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int a;
	scanf_s("%d", &a);

	printf("%d�� 4�� ���� �������� %d", a,  a % 4);
	return 0;
}