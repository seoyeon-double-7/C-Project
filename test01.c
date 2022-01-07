#include<stdio.h>


int main() {
	int num;
	char ch ;
	void prt(int n, char c);

	printf("입력 : ");
	scanf_s("%d", &num);

	getch("%c", &ch);

	//printf("문자입력 : ");
	//scanf_s("%c", &ch);

	ptr(num, ch);

	return 0;
}
void prt(int n, char c) {
	if (n % 2 == 1) {
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < i; j++)
				printf("%c", c);
			printf("\n");
		}
	}
	else
		for (int i = 0; i < n; i++) {
			for (int j = 0; j < n - i; j++)
				printf("%c", c);
			printf("\n");
		}

}