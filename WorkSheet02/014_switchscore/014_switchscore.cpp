#include <stdio.h>

int main()
{
    int score;
    printf("점수를 입력하세요 : ");
    scanf_s("%d", &score);


    switch (score / 5)
    {
    case 20:
    case 19:
        printf("A+");
        break;
    case 18:
        printf("A0");
        break;
    case 17:
        printf("B+");
        break;
    case 16:
        printf("B0");
        break;
    case 15:
        printf("C+");
        break;
    case 14:
        printf("C0");
        break;
    case 13:
        printf("D+");
        break;
    case 12:
        printf("D0");
        break;
    default:
        printf("F");
    }
}