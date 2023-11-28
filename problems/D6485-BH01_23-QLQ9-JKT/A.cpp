#include <stdio.h>


int fibbo(int x) {
    if (x <= 0) {
        return 0;
    } else if (x == 1 || x == 2) {
        return 1;
    } else {
        return fibbo(x - 1) + fibbo(x - 3);
    }
}


int main() {

    int x;
    scanf("%d", &x);

    printf("%d\n", fibbo(x));

    return 0;
}