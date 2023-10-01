#include <stdio.h>

int main()
{
	int assignment, mid, final_exam_score;
	scanf("%d %d %d", &assignment, &mid, &final_exam_score);
	
	double finalScore = 20.00 * (float)assignment / 100.00 + 30.00 * (float)mid / 100.00 + 50.00 * (float)final_exam_score / 100.00;
	
	printf("%.2f\n", finalScore);
}
