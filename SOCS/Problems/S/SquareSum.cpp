#include <stdio.h>

int main()
{
    int a, b, c, d;
    double result;

    for (int i = 0; i < 3; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        result = a * 2.0 + b * 2.0 + c * 2.0 + d;
        
        printf("%.2f\n", result);
    }
    return 0;
}