#include <stdio.h>


void fibbo(int x, int* count) {
    *count += 1;
    if (x <= 1) {
        return;
    } else {
        fibbo(x - 1, count);
        fibbo(x - 2, count);
    }
}


int main() {

    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int n;
        scanf("%d", &n);
        int count = 0;

        fibbo(n, &count);
        printf("Case #%d: %d\n", i, count);
    }
    return 0;
}