#include <stdio.h>

int main()
{
    int a[3], b[3];
    
    for (int i = 0; i < 3; i++)
    {
        scanf("%d + %d =", &a[i], &b[i]);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", a[i] + b[i]);
    }

    return 0;
}