#include <stdio.h>

int main()
{
    char studentName[101], studentIdNumber[9];
    int studentAge;

    scanf("%[^\n]", studentName);
    getchar();
    scanf("%s", studentIdNumber);
    scanf("%d", &studentAge);

    printf("Name: %s\n", studentName);
    printf("NIS: %s\n", studentIdNumber);
    printf("Age: %d\n", studentAge);
    return 0;
}