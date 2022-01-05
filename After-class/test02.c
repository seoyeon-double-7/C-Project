//제곱 출력하는 함수

#include<stdio.h>

int main() {
	void jegop(int n);
	int a;

	printf("¼ýÀÚ ÀÔ·Â : ");
	scanf_s("%d", &a);
	jegop(a);
}
void jegop(int n) {
	printf("%d", n * n);
}
