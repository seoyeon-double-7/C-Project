#include<stdio.h>
int main() {
	int a;
	scanf_s("%d", &a);
	if (a % 3 == 0 && a % 4 == 0) printf("%d�� 3�� 4�� ����Դϴ�.\n", a);
	else if (a % 3 == 0) printf("%d�� 3�� ����Դϴ�.\n", a);
	else if (a % 4 == 0) printf("%d�� 4�� ����Դϴ�.\n", a);
	else printf("�ش����\n");
	return 0;
}