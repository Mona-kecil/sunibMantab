#include <stdio.h>

int main(int argc, char const *argv[])
{
    int final_score, assignment, mid_exam, final_exam;

    scanf("%d %d %d", &assignment, &mid_exam, &final_exam);
    final_score += 20*assignment/100 + 30*mid_exam/100 + 50*final_exam/100;
    printf("%.2f\n", (float)final_score);
    return 0;
}
