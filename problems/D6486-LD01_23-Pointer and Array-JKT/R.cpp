#include <stdio.h>
#include <string.h>



int main() {
    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        char string[1001];
        scanf("%1001[^\n]", string);
        getchar();

        int letterToChange;
        scanf("%d", &letterToChange);
        getchar();

        for (int j = 0; j < letterToChange; j++) {
            char target, replacement;
            scanf("%c %c", &target, &replacement);
            getchar();

            int len = strlen(string);
            for (int k = 0; k < len; k++) {
                if (string[k] == target) {
                    string[k] = replacement;
                }
            }

        }
        printf("Case #%d: %s\n", i, string);
    }

    return 0;
}