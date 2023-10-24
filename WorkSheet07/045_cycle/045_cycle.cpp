#include <stdio.h>

void cycle(int* a, int* b, int* c)
{
	int temp = *b;
	*b = *a;
	*a = *c;
	*c = temp;
}

int main()
{
	int a = 10;
	int b = 20;
	int c = 30;

	printf("a, b, c: %d %d %d \n", a, b, c);

	cycle(&a, &b, &c);

	printf("**변경 후**\n");
	printf("a, b, c: %d %d %d \n", a, b, c);

	return 0;
}