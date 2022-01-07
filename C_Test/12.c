#include <stdio.h>
int main() {
	int a;
	scanf_s("%d", &a);
	if (a % 5 == 0) printf("%d는 5의 배수 이다.\n", a);
}