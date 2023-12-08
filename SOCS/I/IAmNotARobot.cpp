#include <stdio.h>

int main()
{
    double totalComments, robotComments, robotCommentsPercentage;
    scanf("%lf %lf", &totalComments, &robotComments);

    robotCommentsPercentage = robotComments * 100.00 / totalComments;

    printf("%.4f%%\n", robotCommentsPercentage);
    return 0;
}