#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main() {
	int n1, n2;
	scanf_s("%d %d", &n1, &n2);

	if (n1 > n2) printf("%d", n1);
	else printf("%d\n", n2);
	return 0;
}