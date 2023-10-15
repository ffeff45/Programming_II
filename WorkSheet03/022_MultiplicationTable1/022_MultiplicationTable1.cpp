#include <stdio.h>

int main()
{
    int n;
    printf("숫자를 입력하세요 : ");
    scanf_s("%d", &n);

    for (int i = 1; i <= 9; i++) {
        int mult = i * n;
        printf("%dX%d = %d\n", n, i, mult);
    }
}
