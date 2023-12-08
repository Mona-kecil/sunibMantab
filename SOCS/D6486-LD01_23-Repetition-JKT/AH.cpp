#include <stdio.h>
#include <string.h>

int main () {

    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        char number[15];
        scanf("%s", number);

        int len = strlen(number);
        printf("Case #%d: %d\n", i, len);
    }


    return 0;
}