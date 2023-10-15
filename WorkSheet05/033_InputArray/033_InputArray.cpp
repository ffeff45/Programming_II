#include <stdio.h>
#include <string.h>

int main()
{
    char f[50] = { "\0" };

    char grade[2] = { '\0' };
    char studentID[10] = { '\0' };
    char name[20] = { '\0' };

    printf("학년 : ");
    scanf_s("%s", grade, (int)sizeof(grade));
    printf("학번 : ");
    scanf_s("%s", studentID, (int)sizeof(studentID));
    printf("이름 : ");
    scanf_s("%s", name, (int)sizeof(name));

    strcat_s(f,(int)sizeof(f), grade);
    strcat_s(f, "학년 ");
    strcat_s(f, (int)sizeof(f), studentID);
    strcat_s(f, " ");
    strcat_s(f, (int)sizeof(f), name);

    printf("%s", f);
}