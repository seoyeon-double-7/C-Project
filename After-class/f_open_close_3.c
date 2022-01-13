#include<stdio.h>

int main() {
	char name[15];
//	char tel[15];
	

	FILE *fp;
	fp = fopen("a.txt","r+");
	if (fp == NULL) puts("open file");

	while( fgets(name, 15, fp) != NULL )
		fputs(name, stdout);
	

//	fgets(tel, 15, stdin);
//	fputs(tel, fp);

	fclose(fp);
	return 0;
}