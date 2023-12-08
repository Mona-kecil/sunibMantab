#include <stdio.h>

int main()
{
    double num1, num2, num3, num4, result[3];

    for (int i = 0; i < 3; i++)
    {
        scanf("(%lf+%lf)x(%lf-%lf)", &num1, &num2, &num3, &num4);
        getchar();
        result[i] = (num1 + num2) * (num3 - num4);
        
    }

    printf("%.0f %.0f %.0f\n", result[0], result[1], result[2]);
    return 0;
}