#include <stdio.h>


int main () {

    int balloonsCount, strength, balloonStrength;
    int pops = 0;

    scanf("%d %d", &balloonsCount, &strength);
    getchar();

    for (int i = 0; i < balloonsCount; i++) {
        scanf("%d", &balloonStrength);
        getchar();
        if (strength > balloonStrength) pops++;
    }

    printf("%d\n", pops);


    return 0;
}