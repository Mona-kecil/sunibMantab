#include <stdio.h>

int main()
{
    int upElevator, downElevator, maintenanceElevator, counter = 0;
    scanf("%d %d %d", &upElevator, &downElevator, &maintenanceElevator);

    while ((upElevator < downElevator) && (upElevator != maintenanceElevator))
    {
        upElevator++;
        downElevator--;
        counter++;
    }

    if ((upElevator == downElevator) && (upElevator == maintenanceElevator))
        printf("%d\n", counter);
    else
        printf("-1\n");
    
    return 0;
}