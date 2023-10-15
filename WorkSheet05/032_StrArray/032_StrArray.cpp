#include <stdio.h>

int main()
{
	char s[10];
	printf("입력 : ");
	scanf_s("%s", s, (int)sizeof(s));
	for (int i = 0; s[i] != '\0'; i++) {
		printf("%c\n", s[i]);
	}
}