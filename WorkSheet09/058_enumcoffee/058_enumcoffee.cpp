﻿#include <stdio.h>

enum Size { Short, Tall, Grande, Venti };
char sizeName[][7] = { "Short", "Tall", "Grande", "Venti" };
int priceAmericano[] = { 3800, 4100, 4600, 5100 };
int priceCapuccino[] = { 4600, 5900, 6400, 6900 };

int main()
{
    printf("커피가격표(아메리카노)\n");
    for (int i = Short; i <= Venti; i++) {
        printf("%s : ", sizeName[i]);
        printf("%d\n", priceAmericano[i]);
    }


    printf("커피가격표(카푸치노)\n");
    for (int i = Short; i <= Venti; i++) {
        printf("%s : ", sizeName[i]);
        printf("%d\n", priceCapuccino[i]);
    }
}