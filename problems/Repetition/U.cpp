#include <stdio.h>


int main () {

    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        int length;
        scanf("%d", &length);
        getchar();

        char wins[length + 1];

        /*
        Lily = +
        Bibi = -
        */
        int side = 0;

        scanf("%s", wins);
        for (int i = 0; i < length; i++) {
            if (wins[i] == 'T') continue;
            side += (wins[i] == 'L') ? 1 : -1;
        }
        (side == 0) ? printf("None\n") : ((side > 0) ? printf("Lili\n") : printf("Bibi\n"));

    }
    return 0;
}