#include <stdio.h>


int main () {

    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        int a, b, total;
        scanf("%d %d", &a, &b);
        getchar();

        total = a;
        while (a >= b) {
            a -= b;
            total++;
            a++;
        }
        printf("Case #%d: %d\n", i, total);
    }


    return 0;
}