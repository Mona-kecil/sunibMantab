#include <stdio.h>
#include <stdlib.h>

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int len;
        scanf("%d", &len);

        char *word = (char*) malloc(sizeof(char*) * (len + 1));

        for (int j = 0; j < len; j++)
            word[j] = 'a' + j;
        
        word[len] = '\0';

        printf("Case #%d: %s\n", i + 1, word);
    }
    return 0;
}