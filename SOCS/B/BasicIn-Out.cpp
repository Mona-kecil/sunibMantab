#include <stdio.h>

int main()
{
    char string[101];
    int num;

    scanf("%s", string);
    scanf("%d", &num);

    printf("%s\n%d\n", string, num);
    return 0;
}