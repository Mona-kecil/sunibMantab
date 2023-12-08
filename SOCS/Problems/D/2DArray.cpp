#include <stdio.h>

int main()
{
    int column, row, queries;
    scanf("%d %d %d", &column, &row, &queries);

    int matrix[column][row];

    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            matrix[i][j] = 0;
        }
    }

    for (int i = 0; i < queries; i++) {
        int yCoordinate, xCoordinate, newValue;
        scanf("%d %d %d", &yCoordinate, &xCoordinate, &newValue);

        matrix[yCoordinate][xCoordinate] = newValue;
    }

    for (int i = 0; i < column; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d", matrix[i][j]);
            if (j != row - 1) {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}