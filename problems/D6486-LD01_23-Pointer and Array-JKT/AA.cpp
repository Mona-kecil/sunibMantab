#include <stdio.h>


int main() {
    int length;
    scanf("%d", &length);

    int room[length];
    int happy = length;

    for (int i = 0; i < length; i++) {
        scanf("%d", &room[i]);

        /*
            for loops -> virgin
            hashmap -> chad
        */ 

        for (int j = 0; j < i; j++)  {
            if (room[i] == room[j]) {
                happy--;
                break;
            }
        }
    }
    printf("%d\n", happy);
    return 0;
}