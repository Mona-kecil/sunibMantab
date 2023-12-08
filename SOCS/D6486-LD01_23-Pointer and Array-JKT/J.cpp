#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        char string[1001];
        scanf("%s", string);
        getchar();

        int len = strlen(string);

        printf("Case %d: ", i);
        for (int j = 0; j < len; j++) {
            if (j == len - 1) {
                printf("%d\n", string[j]);
            } else {
                printf("%d-", string[j]);
            }
        }
    }
    return 0;
}