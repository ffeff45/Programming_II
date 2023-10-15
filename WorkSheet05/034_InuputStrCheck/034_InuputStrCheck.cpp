#include <stdio.h>
#include <string.h>

int main()
{
	char s[10] = {'\0'};
	int num;

	printf("입력 : ");
	scanf_s("%s", s, sizeof(s));

	num = strlen(s);
	printf("%d", num);
}