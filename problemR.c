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

    printf("Id\t: %s\n", studentID);
    printf("Name\t: %s\n", name);
    printf("Class\t: %c\n", class);
    printf("Num\t: %d\n", num);
    return 0;
}