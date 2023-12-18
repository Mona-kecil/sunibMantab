#include <stdio.h>
#include <string.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);
    getchar();

    for (int i = 0; i < testCase; i++)
    {
        char str[1001];
        scanf("%[^\n]", str);
        getchar();

        int len = strlen(str);
        printf("Case #%d: ", i + 1);

        for (int j = 0; j < len; j++)
        {
            switch(str[j])
            {
                case 'a':
                case 'i':
                case 'e':
                case 'u':
                case 'o':
                case 'A':
                case 'I':
                case 'E':
                case 'U':
                case 'O':
                    continue;
                default:
                    putchar(str[j]);
            }
        }
        putchar('\n');
    }
    return 0;
}