#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    printf("%.0lf\n", pow(2.00, (float)n)-1);
    return 0;
}
