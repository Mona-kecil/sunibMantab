#include <stdio.h>

int main()
{
    int totalSteps;
    scanf("%d", &totalSteps);

    int step, prevStep = 0;
    for (int i = 0; i < totalSteps; i++)
    {
        scanf("%d", &step);
        
        if (step == 1 && i != 0 && prevStep != 0)
            printf("%d ", prevStep);
        
        prevStep = step;
        
        if (i == totalSteps - 1)
            printf("%d\n", step);
    }
    return 0;
}