#include <stdio.h>

int main()
{
    int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int(*p)[10];  // 배열 포인터

    p = &a;
    for (int i = 0; i < 10; i++)
        printf("%d\n", (*p)[i]);

    printf("%d %d\n", p, p + 1);
    // 정수 10개의 배열을 가리키는 포인터이므로 
    // 40차이가 난다
}