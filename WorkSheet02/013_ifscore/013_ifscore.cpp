#include <stdio.h>

int main()
{
    double score;
    printf("점수를 입력하세요 : ");
    scanf_s("%lf", &score);

    if (score >= 95) {
        printf("A+");
    }
    else if (score >= 90) {
        printf("A0");
    }
    else if (score >= 85) {
        printf("B+");
    }
    else if (score >= 80) {
        printf("B0");
    }
    else if (score >= 75) {
        printf("C+");
    }
    else if (score >= 70) {
        printf("C0");
    }
    else if (score >= 65) {
        printf("D+");
    }
    else if (score >= 60) {
        printf("D0");
    }
    else {
        printf("F");
    }
}