#include <stdio.h>

int main()
{
    int n;
    int even = 0;
    int odd = 0;
    printf("숫자를 입력하세요 : ");
    scanf_s("%d", &n);
    for (int d = 1; d <= n; d++) {
        if (d % 2 == 0) {
            even += d;
        }
        else {
            odd += d;
        }
    }
    printf("짝수들의 합 : %d\n", even);
    printf("홀수들의 합 : %d\n", odd);
}