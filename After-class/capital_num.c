// 문자열을 두개 입력받고, 대문자개수 출력하는 함수
#include <stdio.h>
#include <string.h>

int sub(char* p);

int main() {
	char a[100];
	gets(a);
	sub(a);
	printf("%d", sub(a));

	gets(a);
	sub(a);
	printf("%d", sub(a));
	
	return 0;
}

int sub(char* p) {
	int cnt = 0;
	for (int i = 0; i < strlen(p); i++) {
		if (p[i] >= 'A' && p[i] <= 'Z')	cnt++;
	}
	return cnt;
}