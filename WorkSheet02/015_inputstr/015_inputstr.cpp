#include <stdio.h>

int main()
{
    char major[100], sID[100], name[100];
    printf("학과를 입력하세요 : ");
    scanf_s("%s", &major, (int)sizeof(major));
    printf("학번을 입력하세요 : ");
    scanf_s("%s", &sID, (int)sizeof(sID));
    printf("이름을 입력하세요 : ");
    scanf_s("%s", &name, (int)sizeof(name));

    printf("학과 : %s\n", major);
    printf("학번 : %s\n", sID);
    printf("이름 : %s\n", name);
}