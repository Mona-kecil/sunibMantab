#include <stdio.h>


int fibbo(int n, int x, int y) {
    if (n == 0) {
        return x;
    } else if (n == 1) {
        return y;
    } else {
        return fibbo(n - 1, x, y) - fibbo(n - 2, x, y);
    }
}


int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);

        printf("Case #%d: %d\n", i, fibbo(n, x, y));
    }


    return 0;
}