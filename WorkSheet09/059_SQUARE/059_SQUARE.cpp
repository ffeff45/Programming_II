#include <stdio.h>
#define SQUARE(x) ((x)*(x))

int main()
{
	int a = 5;
	printf("%d\n", SQUARE(a));
	printf("%d\n", SQUARE(a + 1));
	printf("%d\n", 100 / SQUARE(a));

}