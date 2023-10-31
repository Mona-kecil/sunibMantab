#include <stdio.h>


int main () {

    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        int length, k;
        scanf("%d %d", &length, &k);
        getchar();

        char string[length + 1];
        char encrypted[length + 1];

        scanf("%s", string);

        for (int j = 0; j < length; j++) {
            if (string[j] < 'a' || string[j] > 'z') continue;
            encrypted[j] = (char)((string[j] - 'a') + k) % 26;
        }
        encrypted[length] = '\0';

        printf("Case #%d: %s\n", i, encrypted);
    }

    return 0;
}