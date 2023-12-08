#include <stdio.h>


int main () {
    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        int length;
        scanf("%d", &length);
        getchar();
        char word[length + 1];

        for (int j = 0; j < length; j++) {
            word[j] = 'a' + j;
        }
        word[length] = '\0';
        printf("Case #%d: %s\n", i, word);
    }


    return 0;
}