#include <stdio.h>

int main()
{
    double length, width, height, surfaceArea;
    scanf("%lf %lf %lf", &length, &width, &height);

    surfaceArea = width * height + 3 * width * length;
    printf("%.3f\n", surfaceArea);
    return 0;
}