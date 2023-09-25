#include <stdio.h>

int main()
{
    int normal, discounted;

    scanf("%d %d", &normal, &discounted);

    double discount_percentage = (float)discounted / (float)normal * 100.00;

    printf("%.2lf%%\n", 100.00 - discount_percentage);
    return 0;
}