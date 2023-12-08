#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    int a, b, c, d;
    double result;
    for (int i = 0; i < testCase; i++)
    {
        scanf("%d %d %d %d", &a, &b, &c, &d);
        result = a * 2 + b * 2 + c * 4.0 / 3.0 + d / 2.0;

        printf("%.2f\n", result);
    }
    return 0;
}