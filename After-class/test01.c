#include <stdio.h>

int n;

int main() {

	while (1) {
	int sum = 0;
		printf("���� �Է� : ");
		scanf_s("%d", &n);
			
		if (n == 0) 
			break;

		else if(n % 2 == 1) {
			for (int i = 1; i < n; i++) 
				if (i % 2 == 1)
					sum += i;
			
			printf("%d\n", sum);
		}
		else
			printf("%d\n", n * n * n);
	}
}