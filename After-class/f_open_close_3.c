#include<stdio.h>

int main() {
	char name[15];
//	char tel[15];
	

	FILE *fp;
	fp = fopen("a.txt","a+");
	if (fp == NULL) puts("open file");

	fgets(name, 15, stdin);
//	fgets(tel, 15, stdin);

	fputs(name, fp);
//	fputs(tel, fp);

	fclose(fp);
	return 0;
}