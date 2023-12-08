#include <stdio.h>

int main()
{
    char word[3][21];
    scanf("%s %s %s", word[0], word[1], word[2]);

    printf("%s %s %s\n", word[2], word[1], word[0]);
    return 0;
}