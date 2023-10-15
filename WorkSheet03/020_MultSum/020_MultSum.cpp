#include <stdio.h>

int main()
{
    int n;
    int add = 0;
    printf("숫자를 입력하세요 : ");
    scanf_s("%d", &n);
    for (int i = 0; i <= 3; i++) {
        int mult = n * i;
        add += mult;
    }
    printf("배수들의 합 : %d\n", add);
}