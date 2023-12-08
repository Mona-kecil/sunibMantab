#include <stdio.h>
#include <string.h>

int main()
{
    int prices[3];
    char items[3][10] = {"Daging", "Sayur", "Telur"};
    scanf("%d %d %d", &prices[0], &prices[1], &prices[2]);

    for (int i = 0; i < 3; i++)
    {
        for (int j = i+1; j < 3; j++)
        {
            if (prices[i] < prices[j])
            {
                int tempPrice = prices[j];
                prices[j] = prices[i];
                prices[i] = tempPrice;

                char tempItem[10];
                strcpy(tempItem, items[j]);
                strcpy(items[j], items[i]);
                strcpy(items[i], tempItem);
            }
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%s\n", items[i]);
    }
    return 0;
}