#include <stdio.h>

int main()
{
    int testCase, degreePerSecond;
    unsigned long totalSecond;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        scanf("%d %lu", &degreePerSecond, &totalSecond);
        double totalDegree = degreePerSecond * totalSecond;
        
        printf("%.2f\n", totalDegree / 360);
    }
    return 0;
}