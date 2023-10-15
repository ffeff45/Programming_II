#include <stdio.h>

int main()
{
    double height, weight;
    printf("키(cm)를 입력하세요 : ");
    scanf_s("%lf", &height);
    printf("몸무게(kg)를 입력하세요 : ");
    scanf_s("%lf", &weight);

    printf("%-6s : %.1fkg\n", "몸무게", weight);
    printf("%-6s : %.1fcm\n", "키", height);
    printf("%-6s : %.1f\n", "bmi", weight / ((height / 100) * (height / 100)));
}