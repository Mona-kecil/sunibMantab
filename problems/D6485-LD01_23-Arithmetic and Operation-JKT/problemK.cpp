#include <stdio.h>

int main(int argc, char const *argv[])
{
    int save;
    float total_saving;
    float interest_rate_per_month;

    scanf("%d %f", &save, &interest_rate_per_month);
    total_saving = save;

    for (int i = 0; i < 3; i++)
    {
        total_saving += total_saving * interest_rate_per_month / 100.00;
    }
    printf("%.2f\n", (float)total_saving);
    return 0;
}
