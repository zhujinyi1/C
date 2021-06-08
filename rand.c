#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
int main()
{
    int i, j;
    srand(time(NULL));
    printf("编号：");
    for (j = 0; j < 8; j++)
    {
        i = rand() % 31 + 1;
        printf("%d  ", i);
    }
    return 0;
} 