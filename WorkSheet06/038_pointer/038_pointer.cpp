#include <stdio.h>

int main()
{
	int a = 10, b = 20;
	int* p;

	p = &a;
	*p *= 2;
	printf("%d\n", *p);

	p = &b;
	*p *= 2;
	printf("%d\n", *p);
}