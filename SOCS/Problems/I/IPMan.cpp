#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        char ip[101];
        scanf("%[^\n]", ip);
        getchar();

        int num[6];
        if (sscanf(ip, "%d.%d.%d.%d.%d.%d", &num[0], &num[1], &num[2], &num[3], &num[4], &num[5]))
            printf("Case #%d: YES\n", i + 1);
        else
            printf("Case #%d: NO\n", i + 1);
    }
    return 0;
}