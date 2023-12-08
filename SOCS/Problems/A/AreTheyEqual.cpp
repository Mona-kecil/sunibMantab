#include <stdio.h>

int main()
{
    double num1, num2, num3, num4;
    scanf("%lf %lf %lf %lf", &num1, &num2, &num3, &num4);

    if (num1 * num2 == num3 - num4)
        printf("True\n");
    else
        printf("False\n");
        
    return 0;
}