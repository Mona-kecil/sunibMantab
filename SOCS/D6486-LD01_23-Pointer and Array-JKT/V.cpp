#include <stdio.h>


int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int days;
        scanf("%d", &days);

        // recursives = L

        long long last = 0;
        long long secondLast = 0;
        long long likes;

        for (int j = 0; j < days; j++) {
            if (j == 0) {
                likes = 0;
            } else if (j == 1) {
                likes = 1;
            } else {
                likes = last + secondLast;
            }
            secondLast = last;
            last = likes;
        }

        printf("Case #%d: %lld\n", i, likes);
    }




    return 0;
}