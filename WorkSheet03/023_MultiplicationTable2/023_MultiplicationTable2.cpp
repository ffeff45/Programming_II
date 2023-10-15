#include <Stdio.h>

int main()
{
    for (int i = 1; i <= 9; i++) {
        for (int j = 2; j <= 5; j++) {
            int mult = i * j;
            printf("%-1dX%-1d = %-2d   ", j, i, mult);
        }
        printf("\n");
    }
    for (int i = 1; i <= 9; i++) {
        for (int j = 6; j <= 9; j++) {
            int mult = i * j;
            printf("%-1dX%-1d = %-2d   ", j, i, mult);
        }
        printf("\n");
    }
}