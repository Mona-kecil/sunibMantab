#include <stdio.h>

int main()
{
    int start, end;
    scanf("%d %d", &start, &end);

    for (int i = start; i <= start+end; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}