#include <stdio.h>
#include <math.h>

int main()
{
    int numOfTeams;
    scanf("%d", &numOfTeams);

    printf("%.0lf\n", pow(2.00, (float)numOfTeams)-1);
    return 0;
}