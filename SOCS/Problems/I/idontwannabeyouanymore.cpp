#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        int strLength;
        scanf("%d", &strLength);
        getchar();

        char str[strLength + 1];
        scanf("%[^\n]", str);
        getchar();

        printf("Case #%d: ", i + 1);
        for (int j = 0; j < strLength; j++)
        {
            if (str[j] >= 'a' && str[j] <= 'z')
                printf("%c", str[j]);
        }
        printf("\n");
    }
    return 0;
}