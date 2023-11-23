#include <stdio.h>


int main () {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int n;
        scanf("%d", &n);

        int array[n] = {0};
        int pos = 0;

        for (int j = 0; j < (n * n); j++) {
            int x;
            scanf("%d", &x);
            array[pos % n] += x;
            pos++;
        }

        printf("Case #%d: ", i);
        for (int j = 0; j < n; j++) {
            if (j == n - 1) {
                printf("%d\n", array[j]);
            } else {
                printf("%d ", array[j]);
            }
        }
    }

    return 0;
}