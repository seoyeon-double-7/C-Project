#include<stdio.h>
int main() {
	char name[15];
	int tel[20];

	fgets(name, 15, stdin);
	fgets(tel, 15, stdin);

	fputs(name, stdout);
	fputs(tel, stdout);

	return 0;
}