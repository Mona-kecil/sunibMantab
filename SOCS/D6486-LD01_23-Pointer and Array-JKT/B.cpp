#include <stdio.h>


int main () {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int size;
        scanf("%d", &size);

        int need[size];
        for (int j = 0; j < size; j++) {
            scanf("%d", &need[j]);
        }

        int available;
        printf("Case #%d: ", i);
        for (int j = 0; j < size; j++) {
            scanf("%d", &available);
            (j != size - 1) ? printf("%d ", need[j] - available) : printf("%d\n", need[j] - available);
        }
    }
    return 0;
}