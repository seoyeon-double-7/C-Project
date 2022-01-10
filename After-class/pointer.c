#include <stdio.h>
int sub(int* ptr);

int main() {
	int a[3];
	int* ptr = a;
	
	for (int i = 0; i < 3; i++) {
		printf("ют╥б : ");
		scanf_s("%d", &a[i]);
	}

	printf("%d", sub(a));
	
	return 0;
}

int sub(int* ptr) {
	int max = 0;
	for (int i = 0; i < 3; i++) {
		if (max < ptr[i])
			max = ptr[i];
	}
	return max;
}