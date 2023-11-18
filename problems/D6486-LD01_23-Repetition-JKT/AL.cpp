#include <stdio.h>


int main () {
    int sword, dragon;
    scanf("%d %d", &sword, &dragon);
    getchar();

    int maxSword = 0, maxDragon = 0;
    int temp;

    for (int i = 0; i < sword; i++) {
        scanf("%d", &temp);
        getchar();
        if (temp > maxSword) maxSword = temp;
    }
    for (int i = 0; i < dragon; i++) {
        scanf("%d", &temp);
        getchar();
        if (temp > maxDragon) maxDragon = temp;
    }
    (maxDragon >= maxSword) ? printf("Secret debunked\n") : printf("The dark secret was true\n");
    
    return 0;
}