#include <stdio.h>

int main(int argc, char const *argv[])
{
    int x[5], y[5];

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
