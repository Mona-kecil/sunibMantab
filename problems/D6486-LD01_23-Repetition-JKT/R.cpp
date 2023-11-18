#include <stdio.h>
#include <stdlib.h>

int main () {
    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        int houses;
        int prevHeight = 1, height = 1;
        int minimum = 2147483647;
        int temp;
        scanf("%d", &houses);
        getchar();
        
        scanf("%d", &height);
        getchar();
        for (int j = 1; j < houses; j++) {
            prevHeight = height;
            scanf("%d", &height);
            getchar();

            temp = height - prevHeight;
            if (temp < 0) temp *= -1;
            if (minimum > temp) minimum = temp;
        }


        printf("Case #%d: %d\n", i, minimum);
    }
    return 0;
}