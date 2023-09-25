#include <stdio.h>

int main()
{
    int start, stop;
    scanf("%d %d", &start, &stop);

    for (int i = start; i <= start + stop; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}