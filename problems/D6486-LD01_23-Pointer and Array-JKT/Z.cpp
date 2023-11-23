#include <stdio.h>

int main() {
    int test;
    scanf("%d", &test);

    for (int i = 1; i <= test; i++) {
        int length, breath;
        scanf("%d %d", &length, &breath);

        char arr[length + 1];
        scanf("%s", arr);

        int first = 0, last = 0, countOne = 0;

        for (int j = 0; j < length; j++) {
            if (arr[j] == '1') {
                first = j + 1;
                break;
            }
        }

        for (int j = length - 1; j >= 0; j--) {
            if (arr[j] == '1') {
                last = j;
                break;
            }
        }

        for (int j = 0; j < length; j++) {
            if (arr[j] == '1') {
                countOne++;
            }
        }

        if ((countOne == 0 ||  countOne == 1) && (length <= breath) || ((first <= breath) && (length - last) <= breath) && countOne != 0 && countOne != 1) {
            printf("Case #%d: Alive\n", i);
        } else {
            printf("Case #%d: Dead\n", i);
        }
    }
    return 0;
}