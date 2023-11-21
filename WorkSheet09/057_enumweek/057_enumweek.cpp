#include <stdio.h>


enum Day { 일, 월, 화, 수, 목, 금, 토 };

int main()
{
    int x;

    printf("요일을 숫자로 입력하세요: ");
    scanf_s("%d", &x, sizeof(x));

    switch (x) {
    case 일:
        printf("일요일입니다!");
        break;
    case 월:
        printf("월요일입니다!");
        break;
    case 화:
        printf("화요일입니다!");
        break;
    case 수:
        printf("수요일입니다!");
        break;
    case 목:
        printf("목요일입니다!");
        break;
    case 금:
        printf("금요일입니다!");
        break;
    case 토:
        printf("토요일입니다!");
        break;
    default:
        printf("잘못 입력하셨어요!");
        break;
    }

}