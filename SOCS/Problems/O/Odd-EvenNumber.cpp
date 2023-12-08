#include <stdio.h>

int main()
{
    int num;
    scanf("%d", &num);

    if (num % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
    return 0;
}