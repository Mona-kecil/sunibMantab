#include <stdio.h>


int main () {
    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        char string[101];
        scanf("%s", string);
        int a, b, c, d, e, f;
        char extra[101] = "";
        if (sscanf(string, "%d.%d.%d.%d.%d.%d%s", &a, &b, &c, &d, &e, &f, extra) == 6 && extra[0] == '\0') {
            printf("Case #%d: YES\n", i);
        } else {
            printf("Case #%d: NO\n", i);
        }
    }
    return 0;
}