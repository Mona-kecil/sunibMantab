#include <stdio.h>


int main () {

    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        int x, y;
        scanf("%d %d", &y, &x);
        printf("Case #%d:\n", i);
        for (int j = 0; j < y; j++) {
            for (int k = 0; k < x; k++) {
                (j == 0 || j == y - 1 || k == 0 || k == x - 1) ? printf("#") : printf(" ");
            }
            printf("\n");
        }

    }


    return 0;
}