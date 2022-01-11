#include<stdio.h>

typedef struct _Person {
	char name[20];
	char phone_num[10];
	int age;
} Person;

int main() {
	Person p1;

	printf("이름 입력 : ");
	gets(p1.name);

	printf("전화번호 입력 : ");
	gets(p1.phone_num);

	printf("나이 입력 : ");
	scanf_s("%d", &p1.age);

	printf("이름: %s\n", p1.name);      
	printf("전화번호: %s\n", p1.phone_num);        
	printf("나이: %d\n", p1.age);

	return 0;
}