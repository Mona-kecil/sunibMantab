#include <stdio.h>


int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int length;
        scanf("%d", &length);

        int array[length];

        for (int j = 0; j < length; j++) {
            scanf("%d", &array[length - j - 1]);

        }

        printf("Case #%d: ", i);

        for (int j = 0; j < length; j++) {
            if (j == length - 1) {
                printf("%d\n", array[j]);
            } else {
                printf("%d ", array[j]);
            }
        }
    }
    return 0;
}