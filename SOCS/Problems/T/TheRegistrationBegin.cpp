#include <stdio.h>

int main()
{
    char studentID[11], studentName[101], studentClass;
    int num;
    scanf("%s\n", studentID);
    scanf("%[^\n]\n", studentName);
    scanf("%c %d", &studentClass, &num);

    printf("Id    : %s\n", studentID);
    printf("Name  : %s\n", studentName);
    printf("Class : %c\n", studentClass);
    printf("Num   : %d\n", num);
    return 0;
}