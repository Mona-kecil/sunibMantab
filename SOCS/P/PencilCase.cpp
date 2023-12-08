#include <stdio.h>

#define PI 3.14

int main()
{
    int testCase;
    scanf("%d", &testCase);

    double radius, height, surfaceArea;
    for (int i = 0; i < testCase; i++)
    {
        scanf("%lf %lf", &radius, &height);
        surfaceArea = (2.00 * PI * radius * radius) + (2.00 * PI * radius * height);
        
        printf("Case #%d: %.2f\n", i + 1, surfaceArea);
    }
    return 0;
}