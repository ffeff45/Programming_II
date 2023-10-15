#include <stdio.h>

int main()
{
	float x, y;
	x = 3;
	y = 4;
	printf("%s %d\n", "x&&y = ", x && y);
	printf("%s %d\n", "x||y = ", x || y);
	printf("%s %d\n", "!x = ", !x);
	printf("%s %d\n", "!y = ", !y);
}