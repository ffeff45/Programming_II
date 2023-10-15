#include <stdio.h>

int main()
{
    int n;
    printf("숫자를 입력하세요 : ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("%d", j);
        }
        printf("\n");
    }
}