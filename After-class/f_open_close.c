#include<stdio.h>

int main() {
	FILE* fp, * fp2;

	if ((fp = fopen("example.txt", "w")) == NULL) {
		printf("파일 읽기 오류! \n");
		return 0;
	}

	fputs("안녕하세요 오늘 날시가 좋아요~ \n", fp);

	if ((fp2 = fopen("example.txt", "a")) == NULL) {
		printf("파일 읽기 오류! \n");
		return 0;
	}

	fputs("히히?", fp2);
	return 0;

	fclose(fp);
	fclose(fp2);
	/*char name[10];
	char tel[15];

	fgets(name, 15, stdin);
	fgets(tel, 15, stdin);

	fputs(name, stdout);
	fputs(tel, stdout);*/
}