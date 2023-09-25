#include <stdio.h>

int main()
{
    int x[4], y[4];

    for (int i = 0; i < 4; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        printf("%d\n", x[i] * y[i]);
    }
    
    return 0;
}