#include <stdio.h>

int main()
{
    for (int i = 5; i <= 15; i++)
    {
        if (i % 3 == 0)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}
