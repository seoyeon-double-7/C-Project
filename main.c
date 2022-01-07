#include <stdio.h>
int k;
void sub();
int main() {
	int a = 8;
	k = 6;
	sub();
	printf("\n main %d %d", k, a);

	return 0;
}