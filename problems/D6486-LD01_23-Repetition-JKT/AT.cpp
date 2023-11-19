#include <stdio.h>


int main () {

    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        int side;
        scanf("%d", &side);
        getchar();

        int base = side * 2 - 1;
        int start = side + 1;
        int end = side - 1;
        for (int j = 0; j < side; j++) {
            start--;
            end++;
            for (int k = 1; k <= end; k++) {
                (k >= start) ? printf("*") : printf(" ");
            }
            printf("\n");
        }
    }


    return 0;
}