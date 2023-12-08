#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int celcius;
        scanf("%d", &celcius);

        double reaumur = 0.8 * (float)celcius, fahrenheit = 1.8 * (float)celcius + 32, kelvin = (float)celcius + 273;
        printf("%.2lf %.2lf %.2lf\n", reaumur, fahrenheit, kelvin);
    }
    return 0;
}