#include <stdio.h>

int main()
{
    int assignmentScore, midExamScore, finalExamScore;
    scanf("%d %d %d", &assignmentScore, &midExamScore, &finalExamScore);

    double finalScore = 20.00 * (float)assignmentScore / 100.00 + 30.00 *
    (float)midExamScore / 100.00 + 50.00 * (float)finalExamScore / 100.00;

    printf("%.2f\n", finalScore);
    return 0;
}