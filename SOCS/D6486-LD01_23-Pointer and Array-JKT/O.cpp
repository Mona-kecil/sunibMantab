#include <stdio.h>


int main () {
    int n;
    scanf("%d", &n);
    int array[n][n];

    int used[n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &array[i][j]);
            if (used[array[i][j]] == 1) {
                for (int k = i; k >= 0; k--) {
                    if (k == i) continue;
                    if (array[k][j] == array[i][j]) {
                        printf("Nay\n");
                        return 0;
                    }
                }
                for (int k = j; k >= 0; k--) {
                    if (k == j) continue;
                    if (array[i][k] == array[i][j]) {
                        printf("Nay\n");
                        return 0;
                    }
                }
            } else {
                used[array[i][j]] = 1;
            }
        }
    }

    printf("Yay\n");
    return 0;
}