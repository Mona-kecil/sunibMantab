#include <stdio.h>

int main()
{
    int size, pattern;
    scanf("%d %d", &size, &pattern);

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            if (i % pattern == 0)
                printf("#");
            else
                printf(".");
        }
        printf("\n");
    }

    printf("\n");

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)
        {
            if (j % pattern == 0)
                printf("#");
            else
                printf(".");
        }
        printf("\n");
    }
    return 0;
}