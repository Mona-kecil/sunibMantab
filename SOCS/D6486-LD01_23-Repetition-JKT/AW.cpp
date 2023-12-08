#include <stdio.h>


int main () {

    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        int students, score;
        scanf("%d", &students);
        getchar();
        int max = 0;
        int presents = 0;
        for (int i = 0; i < students; i++) {
            scanf("%d", &score);
            getchar();
            if (score == max) {
                presents++;
            }
            if (score > max) {
                presents = 1;
                max = score;
            }
        }
        printf("Case #%d: %d\n", i, presents);
    }


    return 0;
}