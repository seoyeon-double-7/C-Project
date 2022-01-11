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
		printf("이름 입력 : ");
		gets(arr[i].name);

		printf("전화번호 입력 : ");
		gets(arr[i].phone_num);

		printf("나이 입력 : ");
		scanf_s("%d", &arr[i].age);

		printf("이름: %s\n", arr[i].name);
		printf("전화번호: %s\n", arr[i].phone_num);
		printf("나이: %d\n", arr[i].age);
		gets_s(n, 2);
		}
	
	return 0;
}