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
	printf("=========== 입력부분 ===========\n");
	for (int i = 0; i < 3; i++) {
		printf("이름 입력 : ");
		gets((p+i)->name);

		printf("전화번호 입력 : ");
		gets((p+i)->phone_num);

		printf("나이 입력 : ");
		scanf_s("%d", &(p+i)->age);
		gets(n);
	}	
}
void outPerson(Person *p) {
	printf("=========== 출력부분 ===========\n");
	for (int i = 0; i < 3; i++) {
		printf("이름: %s\n", (p + i)->name);
		printf("전화번호: %s\n", (p + i)->phone_num);
		printf("나이: %d\n\n", (p + i)->age);
	}
}