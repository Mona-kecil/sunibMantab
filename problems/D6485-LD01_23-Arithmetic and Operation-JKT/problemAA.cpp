#include <stdio.h>

int main()
{
	int assignment, mid, final;
	scanf("%d %d %d", &assignment, &mid, &final);
	
	float finalScore = 20*assignment/100 + 30*mid/100 + 50*final/100;
	
	printf("%.2f\n", finalScore);
}