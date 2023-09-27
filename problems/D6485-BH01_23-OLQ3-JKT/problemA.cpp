#include <stdio.h>

int main(int argc, char const *argv[])
{
    int rep;
    scanf("%d", &rep);

    int percentage[3];
    unsigned int number[3];
    for (int i = 0; i < rep; i++)
    {
        scanf("%d %i", &percentage[i], &number[i]);
    }

    for (int i = 0; i < rep; i++)
    {
        double out = (float)percentage[i] * (float)number[i] / 100.00;
        printf("%.2lf\n", out);
    }
    return 0;
}
