#include <stdio.h>

int main () {

    int t;
    scanf("%d", &t);
    double a[t], b[t], c[t];
    double cashback[t];

    for (int i = 0; i < t; i++) {
        scanf("%lf %lf %lf", &a[i], &b[i], &c[i]);
        cashback[i] = a[i] * b[i] / 100;


        if (cashback[i] > c[i]) {
            cashback[i] = c[i];
        }
    }



    for (int i = 0; i < t; i++) {
        printf("Case #%d: %.lf\n", i + 1, cashback[i]);
    }


    return 0;
}