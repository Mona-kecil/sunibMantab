#include <stdio.h>

typedef unsigned long long ull;

int main()
{
    int num;
    scanf("%d", &num);

    ull combination = 0;
    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j <= num; j++)
        {
            int k = num - i - j;
            if (k >= 0 && k <= num)
            {
                combination++;
            }
        }
    }

    printf("%llu\n", combination);
    return 0;
}