#include <stdio.h>

int main()
{
    char str1[21];
    char str2[21];
    char str3[21];

    for (int i = 0; i < 2; i++)
    {
        scanf("%s %s %s", str1, str2, str3);
        getchar();
        printf("%sszs %sszs %sszs\n", str1, str2, str3);
    }
    return 0;
}