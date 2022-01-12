#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct _Person {
	char name[20];
	char phone_num[10];
	int age;
} Person;

int inPerson(Person* p);	//Person�� double�� ���� Ÿ��
void outPerson(Person* p, int c);

int main() {
	Person* arr;


	arr = (Person*)malloc(sizeof(Person) * 1);

	int count = inPerson(arr);
	outPerson(arr, count);
	return 0;
}

int inPerson(Person* p) {
	char m[2], yn;
	int i = 0;
	while (1) {

		printf("�̸� �Է� : ");
		gets((p + i)->name);

		printf("��ȭ��ȣ �Է� : ");
		gets((p + i)->phone_num);

		printf("���� �Է� : ");
		scanf_s("%d", &(p + i)->age);
		gets(m);

		printf("more? (y/n) ");
		scanf_s("%c", &yn);
		if (yn == 'y') {
			p = (Person*)realloc(p, sizeof(Person) * (i + 2));
			i++;
			printf("\n");
			gets(m);
		}
		else if (yn == 'n') break;
	}
	return i;
}
void outPerson(Person* p, int c) {
	printf("\n=========== ��ºκ� ===========\n");
	for (int i = 0; i < (c + 1); i++) {
		printf("�̸�: %s\n", (p + i)->name);
		printf("��ȭ��ȣ: %s\n", (p + i)->phone_num);
		printf("����: %d\n\n", (p + i)->age);
	}
}