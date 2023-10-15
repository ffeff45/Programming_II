#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
    char str[4][20];

    printf("학과 : ");
    scanf_s("%s", str[0], 20);
    printf("학년 : ");
    scanf_s("%s", str[1], 20);
    printf("학번 : ");
    scanf_s("%s", str[2], 20);
    printf("이름 : ");
    scanf_s("%s", str[3], 20);

    for (int i = 0; i < 4; i++)
        printf("%s\n", str[i]);
}