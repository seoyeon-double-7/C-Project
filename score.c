#include <stdio.h>
int main() {
	int sum = 0;
	int num[10] = {0};

	
	for (int i = 0; i < 5; i++) {
		printf("���� �Է� : ");
		scanf_s("%d", &num[i]);
	}

	for (int i = 0; i < 10; i++) {
		sum += num[i];
	}

	for (int i = 0; i < 10; i++) {
		printf("%d ", num[i]);
	}
	printf("%d", sum);
	return 0;

}