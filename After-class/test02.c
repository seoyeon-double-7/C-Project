#include<stdio.h>

int main() {
	void jegop(int n);
	int a;

	printf("���� �Է� : ");
	scanf_s("%d", &a);
	jegop(a);
}
void jegop(int n) {
	printf("%d", n * n);
}