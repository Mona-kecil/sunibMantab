#include <stdio.h>

int main(int argc, char const *argv[])
{
    int rep;
    scanf("%d", &rep);

    int celcius[3];
    for (int i = 0; i < rep; i++)
    {
        scanf("%d", &celcius[i]);
    }

    for (int i = 0; i < rep; i++)
    {
        double reaumur = 0.8 * (float)celcius[i], fahrenheit = 1.8 * (float)celcius[i] + 32, kelvin = (float)celcius[i] + 273;
        printf("%.2lf %.2lf %.2lf\n", reaumur, fahrenheit, kelvin);
    }
    return 0;
}
