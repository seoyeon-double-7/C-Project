#include <stdio.h>

int n;

int main() {

	while (1) {
	int sum = 0;
		printf("숫자 입력 : ");
		scanf_s("%d", &n);
			
		if (!n) break;

		else if(n % 2) {	//!(n % 2)
			for (int i = 1; i < n; i++) 
				if (i % 2 == 1)
					sum += i;
			
			printf("%d\n", sum);
		}
		else
			printf("%d\n", n * n * n);
	}
	return 0;
}