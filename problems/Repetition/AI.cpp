#include <stdio.h>

int main () {

    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        int size;
        scanf("%d", &size);
        getchar();

        int array[size];
        int cumulativeSum = 0;

        for (int j = 0; j < size; j++) {
            scanf("%d", &array[j]);
            cumulativeSum += array[j];
        }

        int firstHalf = 0;
        int divideable = 0;

        for (int j = 0; j < size; j++) {
            firstHalf += array[j];
            if (firstHalf * 2 == cumulativeSum) {
                divideable = 1;
                break;
            }
        }
        (divideable) ? printf("Case #%d: Yes\n", i) : printf("Case #%d: No\n", i);
    }
    return 0;
}