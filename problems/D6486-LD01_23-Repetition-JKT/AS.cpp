#include <stdio.h>


int main () {
    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        int length;
        int correct = 0;
        scanf("%d", &length);
        getchar();
        char lili[length + 1];
        char key[length + 1];  

        scanf("%s", lili);
        scanf("%s", key);

        for (int j = 0; j < length; j++) {
            if (lili[j] == key[j]) correct++;
        }
        int score = 100 * correct / (double)length;
        printf("Case #%d: %d\n", i, score);
    }


    return 0;
}