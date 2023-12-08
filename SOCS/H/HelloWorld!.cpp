#include <stdio.h>

int main()
{
    char name[101];
    scanf("%[^\n]", name);

    printf("Hello %s!\n", name);
    return 0;
}