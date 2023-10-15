#include <stdio.h>

int main()
{
    int a[100];

    printf("10개의 숫자 입력 : ");
    for (int i = 0; i < 10; i++) {
        scanf_s("%d", &a[i]);
    }

    int first = a[0];
    int second = a[0];

    for (int i = 1; i < 10; i++)
        if (first < a[i]) {
            second = first;
            first = a[i];
        }
        else if (second < a[i])
            second = a[i];

    printf("first = %d, second = %d\n",
        first, second);
}