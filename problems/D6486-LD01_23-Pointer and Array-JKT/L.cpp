#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int position[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &position[i]);
    }

    int result[n];

    for (int i = 0; i < n; i++) {
        int number;
        scanf("%d", &number);
        result[position[i]] = number;
    }

    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            printf("%d\n", result[i]);
        } else {
            printf("%d ", result[i]);
        }
    }


    return 0;
}