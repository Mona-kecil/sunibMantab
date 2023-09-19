#include <stdio.h>

int main(int argc, char const *argv[])
{
    char name[101], nis[9];
    int age;
    scanf("%[^\n]", name);
    getchar();
    scanf("%s %d", nis, &age);

    printf("Name: %s\n", name);
    printf("NIS: %s\n", nis);
    printf("Age: %d\n", age);
    return 0;
}