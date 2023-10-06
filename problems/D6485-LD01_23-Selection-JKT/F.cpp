#include <stdio.h>

int main () {

    // Order: daging - sayur - telur
    int prices[3];
    const char *items[3] = {"Daging", "Sayur", "Telur"};
    int tempPrice;
    const char *tempItem;

    scanf("%d %d %d", &prices[0], &prices[1], &prices[2]);

    for (int i = 0; i < 3; i++) {
        for (int j = i+1; j < 3; j++) {
            if (prices[i] < prices[j]) {
                tempPrice = prices[j];
                prices[j] = prices[i];
                prices[i] = tempPrice;

                tempItem = items[j];
                items[j] = items[i];
                items[i] = tempItem;
            }
        }
    }

    for (int i = 0; i < 3; i++) {
        printf("%s\n", items[i]);
    }
    
    return 0;
}
