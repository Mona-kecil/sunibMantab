#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    double a;
    scanf("%lf", &a); getchar();

    printf("%.0f\n", a + pow(a, 2.0) + pow(a, 3.0));
    return 0;
}
