#include <stdio.h>

int main(int argc, char const *argv[])
{
    char studentID[11], name[101], class;
    int num;

    scanf("%s", studentID);
    getchar();
    scanf("%[^\n]", name);
    getchar();
    scanf("%c %d", &class, &num);

    printf("Id    : %s\n", studentID);
    printf("Name  : %s\n", name);
    printf("Class : %c\n", class);
    printf("Num   : %d\n", num);
    return 0;
}