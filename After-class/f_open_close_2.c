#include<stdio.h>

int main() {
	char a[100] = "good morning";
	FILE *fp;
	fp = fopen("a.txt","w");

	if (fp == NULL) puts("no file");
	else puts("success! check your file");

	fputs(a, fp);

	fclose(fp);
	return 0;
}