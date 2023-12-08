#include <stdio.h>


int main () {

    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        int n;
        int cake = 1;
        scanf("%d", &n);
        getchar();

        printf("Case %d: ", i);
        for (int j = 0; j < n; j++) {
            (j == n - 1) ? printf("%d\n", cake += j) : printf("%d ", cake += j);
        }
    }
    return 0;
}