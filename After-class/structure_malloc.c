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
	printf("=========== 입력부분 ===========\n");
	for (int i = 0; i < a; i++) {
		gets(m);
		printf("이름 입력 : ");
		gets((p + i)->name);

		printf("전화번호 입력 : ");
		gets((p + i)->phone_num);

		printf("나이 입력 : ");
		scanf_s("%d", &(p + i)->age);
	}
}
void outPerson(Person* p, int a) {
	printf("=========== 출력부분 ===========\n");
	for (int i = 0; i < a; i++) {
		printf("이름: %s\n", (p + i)->name);
		printf("전화번호: %s\n", (p + i)->phone_num);
		printf("나이: %d\n\n", (p + i)->age);
	}
}