#include <stdio.h>

int main(int argc, char const *argv[])
{
    char name[101];

    scanf("%[^\n]", name);
    printf("Happy brithday to %s\n", name);
    return 0;
}