﻿#include <stdio.h>

struct Student {
	char dept[20];
	int year;
	int id;
	char name[20];
	char phone[20];
};

int main()
{
	Student s[3];

	for (int i = 0; i < 3; i++) {
		printf("학과 : ");
		scanf_s("%s", s[i].dept, (unsigned int)sizeof(s[i].dept));
		printf("학년 : ");
		scanf_s("%d", &s[i].year);
		printf("학번 : ");
		scanf_s("%d", &s[i].id);
		printf("이름 : ");
		scanf_s("%s", s[i].name, (unsigned int)sizeof(s[i].name));
		printf("전화번호 : ");
		scanf_s("%s", s[i].phone, (unsigned int)sizeof(s[i].phone));
	}

	printf("학과\t학년\t학번\t이름\t전화번호\n");
	for (int i = 0; i < 3; i++) {
		printf("%s\t", s[i].dept);
		printf("%d학년\t", s[i].year);
		printf("%d\t", s[i].id);
		printf("%s\t", s[i].name);
		printf("%s\n", s[i].phone);
	}
}