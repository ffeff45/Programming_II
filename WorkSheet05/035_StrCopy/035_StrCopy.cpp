#include <stdio.h>
#include <string.h>

int main()
{
	char s[10] = { '\0' };
	char c[10] = { '\0' };
	printf("입력 : ");
	scanf_s("%s", s, sizeof(s));

	strcpy_s(c, s);
	printf("%s", c);
}