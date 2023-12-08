#include <stdio.h>

int main()
{
    char name[101];
    scanf("%[^\n]", name);

    printf("Happy Birthday to %s.\n", name);
    return 0;
}