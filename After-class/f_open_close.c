#include<stdio.h>

int main() {

	FILE* pFile = fopen("test01.txt", "a");
	fprintf(pFile, "\n�ȳ��ϼ���~");
	fclose(pFile);

	/*char name[10];
	char tel[15];

	fgets(name, 15, stdin);
	fgets(tel, 15, stdin);

	fputs(name, stdout);
	fputs(tel, stdout);*/

	return 0;
}