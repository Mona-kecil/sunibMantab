#include <stdio.h>
#include <string.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    char num[15];
    for (int i = 0; i < testCase; i++)
    {
        scanf("%s", num);

        printf("Case #%d: %ld\n", i + 1, strlen(num));
    }
    return 0;
}