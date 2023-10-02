#include <stdio.h>

int main()
{
    int a, b, c, d;
    double result[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        result[i] = a * 2.0 + b * 2.0 + c * 2.0 + d;
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%.2f\n", result[i]);
    }
    return 0;
}
