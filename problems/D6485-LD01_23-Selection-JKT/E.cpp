#include <stdio.h>

int main()
{
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);
    if (a * b > c + d) printf("True\n");
    else printf("False\n");
    return 0;
}