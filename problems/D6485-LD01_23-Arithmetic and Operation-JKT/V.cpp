#include <stdio.h>

int main(int argc, char const *argv[])
{
    int T = 3, celcius[3];

    scanf("%d", &T);
    for (int i = 0; i < T; i++)
    {
        scanf("%d", &celcius[i]);
    }

    for (int i = 0; i < T; i++)
    {
        double reaumur = celcius[i] * 4.0 / 5.0;
        double fahrenheit = celcius[i] * 9.0 / 5.0 + 32;
        double kelvin = celcius[i] + 273;
        printf("%.2f %.2f %.2f\n", reaumur, fahrenheit, kelvin);
    }
    return 0;
}

/*
3
10
20
30
*/