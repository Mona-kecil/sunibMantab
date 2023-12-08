#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main () {
    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        char string[10001];
        scanf("%10001[^\n]", string);
        getchar();

        int len = strlen(string);
        int array[26] = {0};
        int count = 0;

        for (int j = 0; j < len; j++) {
            string[j] = toupper(string[j]);
            array[string[j] - 'A']++;
        }

        for (int j = 0; j < 26; j++) {
            if (array[j] > 0) {
                count++;
            }
        }

        if (count % 2 == 0) {
            printf("Case #%d: Yay\n", i);
        } else {
            printf("Case #%d: Ewwww\n", i);
        }
    }

    return 0;
}