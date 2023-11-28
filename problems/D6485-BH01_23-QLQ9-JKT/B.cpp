#include <stdio.h>


void fibbo(int x, char a, char b) {
    if (x == 0) {
        printf("%c", a);
    } else if (x == 1) {
        printf("%c", b);
    } else {
        fibbo(x - 1, a, b);
        fibbo(x - 2, a, b);
    }
    return;
}


int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int x;
        char a;
        char b;

        scanf("%d %c %c", &x, &a, &b);

        printf("Case #%d: ", i);
        fibbo(x, a, b);
        printf("\n");




    }


    return 0;
}