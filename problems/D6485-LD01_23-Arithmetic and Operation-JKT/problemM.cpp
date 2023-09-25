#include <stdio.h>

int main()
{
    int owned, total;
    scanf("%d %d", &owned, &total);

    double owned_percentage = owned * 100.00 / total;
    printf("%.2lf%%\n", owned_percentage);
    return 0;
}