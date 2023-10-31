#include <stdio.h>

#define phi 3.14

int main () {
    double t;
    scanf("%lf", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        double r, h;
        scanf("%lf %lf", &r, &h);

        double circleArea = 2 * phi * r * r;
        double rectangleArea = (2 * phi * r) * h;

        printf("Case #%d: %.2lf\n", i, circleArea + rectangleArea);
    }
}