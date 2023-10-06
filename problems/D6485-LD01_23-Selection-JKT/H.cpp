#include <stdio.h>

int main () {

    char letter[3];
    char tempLetter;
    int order[3] = {1, 2, 3};
    int tempOrder;
    scanf("%c %c %c", &letter[0], &letter[1], &letter[2]);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (letter[i] < letter[j]) {
                tempLetter = letter[i];
                letter[i] = letter[j];
                letter[j] = tempLetter;

                tempOrder = order[i];
                order[i] = order[j];
                order[j] = tempOrder;
            }
        }
    }

    printf("%d %d %d\n", order[0], order[1], order[2]);

    return 0;
}