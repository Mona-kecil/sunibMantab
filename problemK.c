#include <stdio.h>

int main(int argc, char const *argv[])
{
    char name[101];
    int nis, age;
    scanf("%[^\n]", name);
    scanf("%d %d", &nis, &age);

    printf("Name: %s\n", name);
    printf("NIS: %d\n", nis);
    printf("Age: %d\n", age);
    return 0;
}