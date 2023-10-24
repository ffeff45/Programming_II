#include <stdio.h>

int fact1(int n){
    if (n == 1)
        return 1;
    return n * fact1(n - 1);
}

int fact2(int n) {
    int f = 1;
    for (int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main(){
    int n;

    printf("정수 입력: ");
    scanf_s("%d", &n);

    printf("%d! = %d\n", n, fact1(n));
    printf("%d! = %d\n", n, fact2(n));
}