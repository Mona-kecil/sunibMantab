#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

int main () {
    char string[1000001];
    scanf("%[^\n]", string);
    int len = strlen(string);
    int table[256] = {0};
    int vocal = 0, consonant = 0;

    for (int i = 0; i < len; i++) {
        char check = tolower(string[i]);

        if (check >= 'A' && check <= 'z') {
            if (table[check] != 1) {
                table[check] = 1;

                if (check == 'a' || check == 'e' || check == 'i' || check == 'o' || check == 'u') {
                    vocal++;
                } else {
                    consonant++;
                }
            }
        }
    }

    printf("Vocal: %d\n", vocal);
    printf("Consonant: %d\n", consonant);
    return 0;
}