#include <stdio.h>


int main() {
    int x, y;
    scanf("%d %d", &y, &x);
    int array[y][x];

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    int changes;
    scanf("%d", &changes);

    for (int i = 0; i < changes; i++) {
        int xNew, yNew, newValue;
        scanf("%d %d %d", &xNew, &yNew, &newValue);
        array[xNew - 1][yNew - 1] = newValue;
    }

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            if (j == x - 1) {
                printf("%d\n", array[i][j]);
            } else {
                printf("%d ", array[i][j]);
            }
        }
    }
    return 0;
}