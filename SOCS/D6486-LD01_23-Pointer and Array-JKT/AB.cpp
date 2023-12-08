#include <stdio.h>


int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int size;
        scanf("%d", &size);

        int matrix1[size][size];
        int matrix2[size][size];
        int matrix3[size][size];

        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) scanf("%d", &matrix1[j][k]);
        }
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) scanf("%d", &matrix2[j][k]);
        }
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) scanf("%d", &matrix3[j][k]);
        }

        int matrix12[size][size];

        // 1 * 2
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                int sum = 0;
                for (int l = 0; l < size; l++) {
                    sum += matrix1[j][l] * matrix2[l][k];
                }
                matrix12[j][k] = sum;
            }
        }

        // 12 * 3
        int matrix123[size][size];
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                int sum = 0;
                for (int l = 0; l < size; l++) {
                    sum += matrix12[j][l] * matrix3[l][k];
                }
                matrix123[j][k] = sum;
            }
        }

        // print
        printf("Case #%d:\n", i);
        for (int j = 0; j < size; j++) {
            for (int k = 0; k < size; k++) {
                if (k == size - 1) {
                    printf("%d\n", matrix123[j][k]);
                } else {
                    printf("%d ", matrix123[j][k]);
                }
            }
        }
    }

    return 0;
}