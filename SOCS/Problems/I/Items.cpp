#include <stdio.h>

typedef long long ll;

int main()
{
    int testCase;
    scanf("%d", &testCase);

    for (int i = 0; i < testCase; i++)
    {
        int num;
        ll value, total = 0;
        scanf("%d", &num);
        for (int j = 0; j < num; j++)
        {
            scanf("%lld", &value);
            total += value;
        }
        
        printf("Case #%d: %lld\n", i + 1, total);
    }
    return 0;
}