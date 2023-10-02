#include <stdio.h>

int main(int argc, char const *argv[])
{
    int T = 3, a[3], b[3], c[3], d[3];

    scanf("%d", &T);

    for (int i = 0; i < T; i++)
    {
        scanf("%d %d %d %d", &a[i], &b[i], &c[i], &d[i]);
    }

    for (int i = 0; i < T; i++)
    {
        double result = a[i] * 2 + b[i] * 2 + c[i] * 4 / 3 + d[i] / 2;
        printf("%.2f\n", result);
    }
    return 0;
}