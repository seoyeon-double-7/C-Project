#include<stdio.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct _Person {
	char name[20];
	char phone_num[10];
	int age;
} Person;

int main() {
	Person arr[3] = {"", 0, " "};
	char n[2];

	for (int i = 0; i < 3; i++) {
		printf("�̸� �Է� : ");
		gets(arr[i].name);

		printf("��ȭ��ȣ �Է� : ");
		gets(arr[i].phone_num);

		printf("���� �Է� : ");
		scanf_s("%d", &arr[i].age);

		printf("�̸�: %s\n", arr[i].name);
		printf("��ȭ��ȣ: %s\n", arr[i].phone_num);
		printf("����: %d\n", arr[i].age);
		gets_s(n, 2);
		}
	
	return 0;
}