//문자열 입력하면 파일에 저장, 엔터 입력될때까지
#include<stdio.h>

int main() {
	char name[256];
	int c;
	fscanf_s("%s", name);
	fscanf_s("%d", &c);
	fprintf("%s", name);
	fprintf("%d", c);

	FILE* fp;
	fp = fopen("a.txt", "a+");
	if (fp == NULL) puts("open file");
	
	 do{
		fgets(name, 256, stdin);
		fputs(name, fp);
	 } while (strlen(name) != 1);
	 fclose(fp);

	 printf("\n--------------------------\n");
	fp = fopen("a.txt", "r+");
	do {
		fgets(name, 256, fp);
		fputs(name, stdout);
	} while (!feof(fp));
	fclose(fp);
	
	return 0;
}
