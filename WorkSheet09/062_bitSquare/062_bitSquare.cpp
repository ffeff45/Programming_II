#include <stdio.h>

int main() {
	int i;
	printf("숫자를 입력하세요 :");
	scanf_s("%d", &i, sizeof(i));
	printf("%d\n", (i << 1));
	printf("%d\n", (i << 2));
	printf("%d\n", (i << 3));
	printf("%d\n", (i << 4));
}