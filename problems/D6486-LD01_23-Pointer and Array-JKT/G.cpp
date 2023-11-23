#include <stdio.h>


int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int length;
        scanf("%d", &length);

        int result[length];

        for (int j = 0; j < length; j++) {
            scanf("%d", &result[j]);
        }

        int failed = 0;

        for (int j = 0; j < length; j++) {
            int target;
            scanf("%d", &target);

            if (target > result[j]) {
                failed++;
            }
        }

        printf("Case #%d: %d\n", i + 1, failed);
    }
    return 0;
}