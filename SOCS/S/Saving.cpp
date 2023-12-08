#include <stdio.h>

int main()
{
    int saving;
    double totalSaving, interestRatePerMonth;

    scanf("%d %lf", &saving, &interestRatePerMonth);
    totalSaving = saving;

    for (int i = 0; i < 3; i++)
    {
        totalSaving += totalSaving * interestRatePerMonth / 100.00;
    }

    printf("%.2f\n", (double)totalSaving);
    return 0;
}