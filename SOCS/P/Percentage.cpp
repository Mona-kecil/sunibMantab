#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int percentage, number;
        scanf("%d %d", &percentage, &number);

        double out = (double)percentage * (double)number / 100.00;
        printf("%.2f\n", out);
    }
    return 0;
}