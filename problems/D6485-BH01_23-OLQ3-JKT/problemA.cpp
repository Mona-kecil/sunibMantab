#include <stdio.h>

int main(int argc, char const *argv[])
{
    int rep;
    scanf("%d", &rep);

    int percentage[3];
    int number[3];
    for (int i = 0; i < rep; i++)
    {
        scanf("%d %d", &percentage[i], &number[i]);
    }

    for (int i = 0; i < rep; i++)
    {
        double out = (double)percentage[i] * (double)number[i] / 100.00;
        printf("%.2f\n", out);
    }
    return 0;
}