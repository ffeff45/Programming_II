#include <stdio.h>

int main()
{
    int n;
    int add = 0;
    int even = 0;
    int odd = 0;
    printf("숫자를 입력하세요 : ");
    scanf_s("%d", &n);
    for (int d = 1; d <= n; d++) {
        add += d;
        if (d % 2 == 0) {
            even += d;
        }
        else {
            odd += d;
        }
    }
    printf("숫자들의 합 : %d\n", add);
    printf("짝수들의 합 : %d\n", even);
    printf("홀수들의 합 : %d\n", odd);
}