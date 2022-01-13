#include<stdio.h>

typedef struct _Person {
	char name[10];
	char tel[15];
} Person;

int main() {
	Person a;
	fgets(a.name, 15, stdin);
	fgets(a.tel, 15, stdin);

	fputs(a.name, stdout);
	fputs(a.tel, stdout);

	return 0;
}