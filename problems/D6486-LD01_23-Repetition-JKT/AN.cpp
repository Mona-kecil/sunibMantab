#include <stdio.h>


int main () {
    int t;
    scanf("%d", &t);
    getchar();

    char word[] = "ashiap";
    
    for (int i = 1; i <= t; i++) {
        int letters[6];
        scanf("%d %d %d %d %d %d", &letters[0], &letters[1], &letters[2], &letters[3], &letters[4], &letters[5]);
        
        printf("Case #%d: ", i);
        for (int j = 0; j < 6; j++) {
            for (int k = 0; k < letters[j]; k++) {
                printf("%c", word[j]);
            }
        }
        printf("\n");
    }
    return 0;
}