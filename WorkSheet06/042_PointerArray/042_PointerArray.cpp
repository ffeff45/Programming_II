#include <stdio.h>

int main()
{
    int* p[3];
    int a = 10, b = 20, c = 30;

    p[0] = &a;
    p[1] = &b;
    p[2] = &c;

    for (int i = 0; i < 3; i++) {
        *p[i] *= 2;
        printf("%d\n", *p[i]);
    }

    printf("%d %d %d\n", a, b, c);
}