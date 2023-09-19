#include <stdio.h>

int main(int argc, char const *argv[])
{
    char name[101];

    scanf("%[^\n]", name);
    printf("Happy Birthday to %s.\n", name);
    return 0;
}