// fungtion.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <stdio.h>

double plus(double x, double y) {
    return x + y;
}

double minus(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    if (y == 0) {
        printf("[오류] : 0으로 나누면 안됩니다!\n");
    }
    return x / y;
}

int main()
{
    double x, y;

    printf("두 숫자를 입력하세요 : ");
    scanf_s("%lf %lf", &x, &y);

    printf("더하기 = %f \n", plus(x, y));
    printf("빼기 = %f \n", minus(x, y));
    printf("곱하기 = %f \n", multiply(x, y));
    printf("나누기 = %f \n", divide(x, y));
}
