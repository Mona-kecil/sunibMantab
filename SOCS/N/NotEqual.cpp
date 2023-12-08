#include <stdio.h>

int main()
{
    long long num1, num2, num3, num4;
    scanf("%lld %lld %lld %lld", &num1, &num2, &num3, &num4);

    if (num1 * num2 > num3 + num4)
        printf("True\n");
    else
        printf("False\n");
        
    return 0;
}