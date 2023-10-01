#include <stdio.h>

int main()
{
    double a, b, c, d;
    double out[3];
    for (int i = 0; i < 3; i++)
    {
        scanf("(%lf+%lf)x(%lf-%lf)", &a, &b, &c, &d);
        getchar();
        out[i] = (a+b)*(c-d);
    }

    printf("%.0f %.0f %.0f\n", out[0], out[1], out[2]);
    return 0;
}

// Kok pake double siallllll, socs sialllllll



/*
(1+2)x(3-4)
(10+3)x(5-2)
(9+21)x(45-20)
*/