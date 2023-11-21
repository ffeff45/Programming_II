#include <stdio.h>

int main() {

    int mask = 0x000f;   // 맨 아래 4자리가 1111
    int x;

    while (true) {
        printf("숫자 입력 : ");
        scanf_s("%d", &x, sizeof(x));
        if (x < 0)
            break;

        printf("%x\n", (x & mask)); // 16진수로 출력
    }
}