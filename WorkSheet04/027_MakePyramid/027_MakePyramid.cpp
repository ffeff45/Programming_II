#include <stdio.h>

int main()
{
    int n;
    printf("자연수 입력 : ");
    scanf_s("%d", &n);

    printf("1)\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("2)\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i * 2 - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("3)\n");
    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("4)\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("5)\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    printf("6)\n");
    for (int i = n; i > 0; i--) {
        for (int j = 1; j <= n - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            printf("*");
        }
        printf("\n");
    }
}