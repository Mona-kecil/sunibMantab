#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int height, width;
        scanf("%d %d", &height, &width);

        int **photo = (int**) malloc(sizeof(int*) * height);
        for (int j = 0; j < height; j++)
            photo[j] = (int*) malloc(sizeof(int) * width);

        printf("Case #%d:\n", i + 1);
        for (int j = 0; j < height; j++)
        {
            for (int k = 0; k < width; k++)
            {
                if (j == 0 || j == height - 1 || k == 0 || k == width - 1)
                    putchar('#');
                else
                    putchar(' ');
            }
            putchar('\n');
        }

    }
    return 0;
}