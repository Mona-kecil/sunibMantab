#include <stdio.h>

typedef long long ll;

int main()
{
    int num;
    ll total = 0, profit;
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%lld", &profit);
        if (profit > 0)
            total += profit;
    }
    
    printf("%lld\n", total);
    return 0;
}