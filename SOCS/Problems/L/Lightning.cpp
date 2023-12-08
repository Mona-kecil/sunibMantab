#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    int let1, let2, let3, let4, let5, let6;
    for (int i = 0; i < testCase; i++)
    {
        scanf("%d %d %d %d %d %d", &let1, &let2, &let3, &let4, &let5, &let6);
        printf("Case #%d: ", i + 1);

        for (int j = 0; j < let1; j++)
            printf("a");
        for (int j = 0; j < let2; j++)
            printf("s");
        for (int j = 0; j < let3; j++)
            printf("h");
        for (int j = 0; j < let4; j++)
            printf("i");
        for (int j = 0; j < let5; j++)
            printf("a");
        for (int j = 0; j < let6; j++)
            printf("p");

        printf("\n");
    }
    return 0;
}