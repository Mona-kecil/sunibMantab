#include <stdio.h>

int main()
{
    int a[4], b[4], c[4], d[4];

    for (int i = 0; i < 3; i++)
    {
        scanf("(%d+%d)x(%d-%d)", &a[i], &b[i], &c[i], &d[i]);
        getchar();
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d ", (a[i]+b[i])*(c[i]-d[i]));
    }
    printf("\n");

    return 0;
}

/*
Sample input

(1+2)x(3-4)
(10+3)x(5-2)
(9+21)x(45-20)
*/