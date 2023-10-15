#include <stdio.h>
#include <string.h>

int main()
{
	char s1[10], s2[10], s3[10] = { 0 };

	printf("문자열1 : ");
	scanf_s("%s", s1, (int)sizeof(s1));
	printf("문자열2 : ");
	scanf_s("%s", s2, (int)sizeof(s2));
	printf("문자열3 : ");
	scanf_s("%s", s3, (int)sizeof(s3));

	if (strcmp(s1, s2) < 0) {
		if (strcmp(s2, s3) < 0) printf("%s %s %s", &s1, &s2, &s3);
		else if (strcmp(s1, s3) < 0) printf("%s %s %s", &s1, &s3, &s2);
		else printf("%s %s %s", &s3, &s1, &s2);
	}
	else {
		if (strcmp(s1, s3) < 0) printf("%s %s %s", &s2, &s1, &s3);
		else if (strcmp(s2, s3) < 0) printf("%s %s %s", &s2, &s3, &s1);
		else printf("%s %s %s", &s3, &s2, &s1);
	}
}