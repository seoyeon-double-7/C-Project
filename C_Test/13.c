#include<stdio.h>
int main() {
	int a;
	scanf_s("%d", &a);
	if (a % 3 == 0 && a % 4 == 0) printf("%d는 3과 4의 배수입니다.\n", a);
	else if (a % 3 == 0) printf("%d는 3의 배수입니다.\n", a);
	else if (a % 4 == 0) printf("%d는 4의 배수입니다.\n", a);
	else printf("해당없음\n");
	return 0;
}