#include <stdio.h>

struct Student {
	char dept[20];
	int year;
	int id;
	char name[20];
	char phone[20];
};

int main()
{
	Student s;

	printf("학과 : ");
	scanf_s("%s", s.dept, (unsigned int)sizeof(s.dept));
	printf("학년 : ");
	scanf_s("%d", &s.year);
	printf("학번 : ");
	scanf_s("%d", &s.id);
	printf("이름 : ");
	scanf_s("%s", s.name, (unsigned int)sizeof(s.name));
	printf("전화번호 : ");
	scanf_s("%s", s.phone, (unsigned int)sizeof(s.phone));

	printf("%s\t", s.dept);
	printf("%d학년\t", s.year);
	printf("%d\t", s.id);
	printf("%s\t", s.name);
	printf("%s\n", s.phone);
}