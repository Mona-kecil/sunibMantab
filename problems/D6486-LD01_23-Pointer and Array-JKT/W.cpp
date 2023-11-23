#include <stdio.h>


int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int length;
        scanf("%d", &length);

        int arr[length];
        for (int j = 0; j < length; j++) {
            scanf("%d", &arr[j]);
        }

        // solution (can be optimized but this works)
        int count = 0;
        int used[length] = {0};
        
        for (int j = 0; j < length; j++) {
            for (int k = j + 1; k < length; k++) {
                int sum = arr[j] + arr[k];
                for (int l = 0; l < length; l++) {
                    if (arr[l] == sum && used[l] == 0) {
                        used[l] = 1;
                        count++;
                    }
                }
            }
        }

        printf("Case #%d: %d\n", i, count);
    }
    return 0;
}