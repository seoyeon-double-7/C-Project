#include<stdio.h>

int main() {
	int a, b, r = 0;
	char op;
	scanf_s("%d%c%d", &a, &op, &b);

	switch (op) {
		case '+': r = a + b; break;
		case '-': r = a - b; break;
		case '*': r = a * b; break;
		case '/': r = a / b; break;
	}

	printf("%d %c %d = %d", a, op, b, r);
	return 0;
}