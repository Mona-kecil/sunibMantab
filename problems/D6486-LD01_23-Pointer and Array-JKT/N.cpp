#include <stdio.h>


int main() {

    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int length;
        scanf("%d", &length);

        int max = -1000001, max2 = -1000001;

        for (int i = 0; i < length; i++) {
            int number;
            int assigned = 0;

            scanf("%d", &number);

            if (number > max) {
                max2 = max;
                max = number;
                assigned = 1;
            }

            if (number > max2 && !assigned) {
                max2 = number;
            }
        }

        printf("Case #%d: %d\n", i , max + max2);
    }


    return 0;
}