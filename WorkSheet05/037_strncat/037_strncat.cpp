#include <stdio.h>
#include <string.h>

int main()
{
	char s[10] = {'\0'};
	char t[10] = {'\0'};
	printf("s[] 문자열 입력 : ");
	scanf_s("%s", s, 10);
	
	printf("t[] 문자열 입력 : ");
	scanf_s("%s", t, 10);
	
	strncat_s(s, t, _TRUNCATE);
	printf("%s\n", s);
}