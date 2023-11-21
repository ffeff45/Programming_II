#include <stdio.h>

int main()
{
    int mask = 0x0004;
    int x;

    while (true) {
        printf("숫자 입력 : ");
        scanf_s("%d", &x, sizeof(x));
        if (x < 0)
            break;
        // cout << (x & mask) << endl;
        // 비트연산자의 우선순위가 == 보다 낮다. p.53 참조
        if ((x & mask) == 0x0004)
            printf("3번째 비트가 1입니다.\n");
        else
            printf("3번째 비트가 0입니다.\n");
    }

}