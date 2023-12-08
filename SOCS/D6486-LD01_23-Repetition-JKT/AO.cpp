#include <stdio.h>
#include <string.h>

int main () {

    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 0; i < t; i++) {
        int length;
        scanf("%d", &length);
        getchar();

        char string[length + 1];
        scanf("%[^\n]", string);

        int j = 0;
        for (int i = 0; i < length; i++) {
            if (string[i] >= 'a' && string[i] <= 'z') string[j++] = string[i];
        }
        string[j] = '\0';
        printf("Case #%d: %s\n", i + 1, string);
    }

    return 0;
}