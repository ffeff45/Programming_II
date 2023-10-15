#include <stdio.h>

int main()
{
    printf("화씨     섭씨\n");
    printf("=============\n");
    for (double i = 100; i > 0; i -= 20) {
        double C = ((5.0 / 9.0) * (i - 32.0));
        printf("%3.1f     %3.1f\n", i, C);
    }
}
