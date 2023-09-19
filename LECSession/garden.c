#include <stdio.h>

int main()
{
    int height, width;
    scanf("%d %d", &height, &width);

    // Creating the garden layout
    int garden[height][width];
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= width; j++)
        {
            scanf("%d", &garden[i][j]);
        }
    }

    // Total values to change
    int total;
    scanf("%d", &total);

    // X, Y, Val
    // Change garden[x][y] to new val
    int x, y, newVal;
    for (int i = 1; i <= total; i++)
    {
        scanf("%d %d %d", &x, &y, &newVal);
        garden[x][y] = newVal;
    }

    // Displaying the output
    for (int i = 1; i <= height; i++)
    {
        for (int j = 1; j <= width; j++)
        {
            printf("%d ", garden[i][j]);
        }
        printf("\n");
    }
}