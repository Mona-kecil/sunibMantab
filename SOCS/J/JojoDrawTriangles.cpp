#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    int height;
    for (int i = 0; i < testCase; i++)
    {
        scanf("%d", &height);

        // Print complete triangle
        for (int j = 0; j < height; j++)
        {
            for (int k = 0; k < height - j - 1; k++)
                printf(" ");
            
            for (int k = 0; k < j * 2 + 1; k++)
                printf("*");
            printf("\n");
        }
    }
    return 0;
}