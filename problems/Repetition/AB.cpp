#include <stdio.h>


int main () {

    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        int toys, a, b, c, d;
        int disposed = 0;
        scanf("%d %d %d %d %d", &toys, &a, &b, &c, &d);
        getchar();

        for (int i = 1; i <= toys; i++) {
            if (i % a == 0 || i % b == 0 || i % c == 0 || i % d == 0) disposed++;
        }
        
        printf("Case #%d: %d\n", i, disposed);
    }


    return 0;
}