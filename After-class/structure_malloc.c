#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct _Person {
	char name[20];
	char phone_num[10];
	int age;
} Person;

void inPerson(Person* p, int a);
void outPerson(Person* p, int a);

int main() {
	Person* arr;
	int n;

	printf("intput > "); scanf_s("%d", &n);
	arr = (Person*)malloc(sizeof(Person) * n);

	inPerson(arr, n);
	outPerson(arr, n);
	return 0;
}

void inPerson(Person* p, int a) {
	char n[2];
	char m[2];
	printf("=========== �Էºκ� ===========\n");
	for (int i = 0; i < a; i++) {
		gets(m);
		printf("�̸� �Է� : ");
		gets((p + i)->name);

		printf("��ȭ��ȣ �Է� : ");
		gets((p + i)->phone_num);

		printf("���� �Է� : ");
		scanf_s("%d", &(p + i)->age);
	}
}
void outPerson(Person* p, int a) {
	printf("=========== ��ºκ� ===========\n");
	for (int i = 0; i < a; i++) {
		printf("�̸�: %s\n", (p + i)->name);
		printf("��ȭ��ȣ: %s\n", (p + i)->phone_num);
		printf("����: %d\n\n", (p + i)->age);
	}
}