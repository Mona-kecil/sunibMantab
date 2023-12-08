#include <stdio.h>


int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int length;
        scanf("%d", &length);

        int array[length];
        for (int j = 0; j < length; j++) { 
            scanf("%d", &array[j]);
        }

        int lili, bibi;
        scanf("%d %d", &bibi, &lili);

        printf("Case #%d : ", i);
        if (array[lili - 1] == array[bibi - 1]) {
            printf("Draw\n");
            continue;
        }

        (array[lili - 1] > array[bibi - 1]) ? printf("Lili\n") : printf("Bibi\n");
    }


    return 0;
}