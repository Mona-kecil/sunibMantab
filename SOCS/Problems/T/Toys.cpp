#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    int numberOfToys, pattern1, pattern2, pattern3, pattern4, disposed = 0;
    for (int i = 1; i <= testCase; i++)
    {
        scanf("%d %d %d %d %d", &numberOfToys, &pattern1, &pattern2, &pattern3, &pattern4);

        for (int j = 1; j <= numberOfToys; j++)
        {
            if (j % pattern1 == 0 || j % pattern2 == 0 || j % pattern3 == 0 || j % pattern4 == 0)
                disposed++;
        }
        
        printf("Case #%d: %d\n", i, disposed);
        disposed = 0;
    }
    return 0;
}