#include <stdio.h>


int main () {

    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        int finish;
        int jumps = 0;
        scanf("%d", &finish);
        getchar();

        while (finish > 0) {
            jumps++;
            finish -= jumps;
        }

        printf("Case #%d: %d\n", i, jumps);
    }


    return 0;
}