#include<stdio.h>

typedef struct _Person {
	char name[20];
	char phone_num[10];
	int age;
} Person;

int main() {
	Person p1;

	printf("�̸� �Է� : ");
	gets(p1.name);

	printf("��ȭ��ȣ �Է� : ");
	gets(p1.phone_num);

	printf("���� �Է� : ");
	scanf_s("%d", &p1.age);

	printf("�̸�: %s\n", p1.name);      
	printf("��ȭ��ȣ: %s\n", p1.phone_num);        
	printf("����: %d\n", p1.age);

	return 0;
}