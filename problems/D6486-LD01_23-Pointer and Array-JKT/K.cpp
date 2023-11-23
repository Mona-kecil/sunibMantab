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
        char reversed[len + 1];

        for (int i = 0; i < len; i++) {
            reversed[i] = string[len - i - 1];
        }
        reversed[len] = '\0';

        printf("Case #%d : %s\n", i, reversed);
    }
    return 0;
}