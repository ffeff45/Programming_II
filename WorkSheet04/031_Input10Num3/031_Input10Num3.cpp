#include <stdio.h>

int main()
{
	int a[100];

	printf("10개의 숫자 입력 : ");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a[i]);
	}

	int iEvenSum = 0;	// 인덱스가 짝수인 원소의 합
	int iOddSum = 0;	// 인덱스가 홀수인 원소의 합
	int evenSum = 0;	// 값이 짝수인 원소의 합
	int oddSum = 0;		// 값이 홀수인 원소의 합

	for (int i = 0; i < 10; i++) {
		if (i % 2 == 0)
			iEvenSum += a[i];
		else
			iOddSum += a[i];
		if (a[i] % 2 == 0)
			evenSum += a[i];
		else
			oddSum += a[i];
	}
	printf("1)  iEvenSum = %d\n", iEvenSum);
	printf("2)  iOddSum = %d\n", iOddSum);
	printf("3)  EvenSum = %d\n", evenSum);
	printf("4)  OddSum = %d\n", oddSum);
}