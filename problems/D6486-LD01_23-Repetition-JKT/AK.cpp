#include <stdio.h>


int main () {

    int t;
    scanf("%d", &t);
    getchar();

    int steps[t];

    for (int i = 0; i < t; i++) {
        scanf("%d", &steps[i]);
    }

    for (int i = 1; i < t; i++) {
        if (steps[i] == 1) printf("%d ", steps[i - 1]);
    }
    printf("%d\n", steps[t - 1]);
    return 0;
}