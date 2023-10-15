#include <stdio.h>

int main()
{
    int n;
    int add = 0;
    printf("숫자를 입력하세요 : ");
    scanf_s("%d", &n);
    for (int d = 1; d <= n; d++) {
        add += d;
    }
    printf("숫자들의 합 : %d\n", add);
}
