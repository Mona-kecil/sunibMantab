#include <stdio.h>

// Prob E
// Instant ramen life-hack
int main(int argc, char const *argv[])
{
    int rep;
    int needed, available, onSale;

    scanf("%d", &rep); getchar();

    for (int i = 1; i <= rep; i++)
    {
        scanf("%d %d %d", &needed, &available, &onSale); getchar();
        
        if (available + onSale < needed)
        {
            printf("Case #%d: no\n", i);
        }
        else
        {
            printf("Case #%d: yes\n", i);
        }
    }
    return 0;
}
