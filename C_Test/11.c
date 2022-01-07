#include<stdio.h>
int main() {
	int a, b;
	scanf_s("%d %d", &a, &b);
	if (a % 2 == 0) printf("%d + %d = %d", a, b, (a + b));
	else printf("%d * %d = %d", a, b, (a * b));
	return 0;
}