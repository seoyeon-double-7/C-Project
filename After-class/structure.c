#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct _Person {
	char name[20];
	char phone_num[10];
	int age;
} Person;

void inPerson(Person* p);
void outPerson(Person* p);

int main() {
	Person arr[3];
	inPerson(arr);
	outPerson(arr);
	return 0;
}

void inPerson(Person *p) {
	char n[2];
	printf("=========== �Էºκ� ===========\n");
	for (int i = 0; i < 3; i++) {
		printf("�̸� �Է� : ");
		gets((p+i)->name);

		printf("��ȭ��ȣ �Է� : ");
		gets((p+i)->phone_num);

		printf("���� �Է� : ");
		scanf_s("%d", &(p+i)->age);
		gets(n);
	}	
}
void outPerson(Person *p) {
	printf("=========== ��ºκ� ===========\n");
	for (int i = 0; i < 3; i++) {
		printf("�̸�: %s\n", (p + i)->name);
		printf("��ȭ��ȣ: %s\n", (p + i)->phone_num);
		printf("����: %d\n\n", (p + i)->age);
	}
}