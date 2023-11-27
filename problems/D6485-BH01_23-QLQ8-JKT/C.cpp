#include <stdio.h>


int main() {
    int y, x, queries;
    scanf("%d %d %d", &y, &x, &queries);
    int matrix[y][x];
    
    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            matrix[i][j] = 0;
        }
    }

    for (int i = 0; i < queries; i++) {
        int y, x, value;
        scanf("%d %d %d", &y, &x, &value);

        matrix[y][x] = value;
    }

    for (int i = 0; i < y; i++) {
        for (int j = 0; j < x; j++) {
            printf("%d", matrix[i][j]);
            if (j != x - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}