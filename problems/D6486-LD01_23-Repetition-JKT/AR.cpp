#include <stdio.h>


int main () {
    int n, side;
    scanf("%d %d", &n, &side);
    getchar();

    for (int i = 0; i < n; i++) {
        // triangle
        for (int j = 0; j < side; j++) {
            for (int k = 0; k < side; k++) {
                (k < side - 1 - j) ? printf (" ") : printf ("*");
            }
            printf("\n");
        }
    }
    return 0;
}