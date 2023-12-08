#include <stdio.h>


int main () {

    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        int pages, target, flips;
        scanf("%d %d", &pages, &target);
        getchar();
        if (target <= pages / 2) {
            flips = target / 2;
        } else {
            if (target % 2 != 0) {
                target--;
            }
            flips = (pages - target) / 2;
        }
        printf("Case #%d: %d\n", i, flips);
    }
    return 0;
}