#include <stdio.h>


int main () {
    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        int n;
        scanf("%d", &n);
        getchar();

        for (int j = 0; j < n; j++) {
            for (int k = 0; k < n; k++) {
                (j == 0 || j == n - 1 || k == 0 || k == n - 1 || j == k || n - 1 - j == k) ? printf("*") : printf(" ");
            }
            printf("\n");
        }

        printf("\n");
        
    }
    return 0;
}