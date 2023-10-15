#include <stdio.h>

int main()
{
    int n;
    printf("자연슈 입력 : ");
    scanf_s("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d, ", i);
        }
    }
}
