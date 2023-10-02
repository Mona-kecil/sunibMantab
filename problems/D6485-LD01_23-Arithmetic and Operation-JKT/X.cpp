#include <stdio.h>

int main()
{
    double num[3], result;

    scanf("%lf %lf %lf", &num[0], &num[1], &num[2]);
    result = num[0] * num[1] * num[2];
    printf("%.0f\n", result);
    return 0;
}