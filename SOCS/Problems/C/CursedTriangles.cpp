#include <stdio.h>

int main()
{
    int amount, height;
    scanf("%d %d", &amount, &height);

    for (int i = 0; i < amount; i++)
    {
        for (int j = 0; j < height; j++)
        {
            for (int k = 0; k < height - j - 1; k++)
                printf(" ");

            for (int k = 0; k < j + 1; k++)
                printf("*");
            
            printf("\n");
        }
    }
    return 0;
}