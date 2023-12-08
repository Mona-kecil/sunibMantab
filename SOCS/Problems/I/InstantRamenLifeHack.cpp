#include <stdio.h>

int main()
{
    int testCases, ramenNeeded, ramenAtHome, ramenOnSale;
    scanf("%d", &testCases);
    
    for (int i = 0; i < testCases; i++)
    {
        scanf("%d %d %d", &ramenNeeded, &ramenAtHome, &ramenOnSale);
        
        if (ramenNeeded < ramenAtHome + ramenOnSale)
        {
            printf("Case #%d: yes\n", i + 1);
        }
        else
        {
            printf("Case #%d: no\n", i + 1);
        }
    }
    return 0;
}