#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int size;
    int* numPtr2;

    printf("�� �Է� : ");
    scanf_s("%d", &size);

    numPtr2 = malloc(sizeof(int)*size);   

    printf("%p\n", numPtr2);

    free(numPtr2);    // �������� �Ҵ��� �޸� ����

    return 0;
}