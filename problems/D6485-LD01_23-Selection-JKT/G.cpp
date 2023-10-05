#include <stdio.h>

int main () {

    double a, b, c, d;

    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

    if (a * b == c - d) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}