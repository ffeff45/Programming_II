#include <stdio.h>

int main()
{
    int n;
    printf("자연수 입력 : ");
    scanf_s("%d", &n);
    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            printf("%d\t", j);
        }
        printf("\n");
    }
}