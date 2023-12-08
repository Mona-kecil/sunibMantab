#include <stdio.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        int strLen, key;
        scanf("%d %d", &strLen, &key);
        getchar();

        char str[strLen + 1];
        scanf("%s", str);
        getchar();

        for (int j = 0; j < strLen; j++)
			str[j] = (((str[j] - 'a') + key) % 26) + 'a';
        
        printf("Case #%d: %s\n", i + 1, str);
    }
    return 0;
}