#include <stdio.h>

int main()
{
    float total_comment, robot_comment;
    scanf("%f %f", &total_comment, &robot_comment);

    float robot_comment_percentage = robot_comment*100/total_comment;

    printf("%.4f%\n", robot_comment_percentage);
    return 0;
}