#include <stdio.h>
#include <string.h>

int main() {
	char key[100] = "welcome";
	char new[100];

	while (1) {
		printf("��й�ȣ �Է� : ");
		gets(new);
		if (strcmp(key, new) == 0) {
			printf("welcome");
			break;
		}	
	}

	return 0;
}