#include <stdio.h>
void jegop(int p[]);
int main() {
	int a[12] = {2,5,3,6,8,2,5,7,9,3,2};
	jegop(a);

	//printf("%d", a);

	return 0;
}

void jegop(int p[]) {
	int sum = 0;
	for (int i = 0; p[i] != '\0'; i++) {
		sum += p[i];
		printf("%d ", p[i]);
	}
	printf("%d\n", sum);
}