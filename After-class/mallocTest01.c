#include <stdio.h>
#include <stdlib.h> 

int main()
{
    int size;
    int* numPtr2;

    printf("수 입력 : ");
    scanf_s("%d", &size);

    numPtr2 = malloc(sizeof(int)*size);   

    printf("%p\n", numPtr2);

    free(numPtr2);    // 동적으로 할당한 메모리 해제

    return 0;
}