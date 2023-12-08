#include <stdio.h>

int main()
{
    int amountOfItem;
    scanf("%d", &amountOfItem);

    int item[amountOfItem];

    for (int i = 0; i < amountOfItem; i++)
    {
        scanf("%d", &item[i]);
    }

    int maxDupe = 0;

    for (int i = 0; i < amountOfItem; i++)
    {
        if (item[i] == -1)
            continue;
        
        int dupe = 1;
        for (int j = i + 1; j < amountOfItem; j++)
        {
            if (item[j] == -1)
                continue;
            
            if (item[i] == item[j])
            {
                item[j] = -1;
                dupe++;
            }
        }

        if (maxDupe < dupe)
            maxDupe = dupe;
    }

    printf("%d\n", maxDupe);
    return 0;
}