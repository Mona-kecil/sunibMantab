#include <stdio.h>

int main()
{
    double total_comment, robot_comment;
    scanf("%lf %lf", &total_comment, &robot_comment);

    double robot_comment_percentage = robot_comment*100/total_comment;

    printf("%.4f%%\n", robot_comment_percentage);
    return 0;
}