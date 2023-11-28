#include <stdio.h>


int main() {
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++) {
        int rooms, patterns; 
        scanf("%d %d", &rooms, &patterns);

        int room[rooms] = {0};

        for (int j = 0; j < patterns; j++) {
            int number;
            scanf("%d", &number);

            for (int k = number; k <= rooms; k += number) {
                (room[k - 1] == 1) ? room[k - 1] = 0 
                                    : room[k - 1] = 1;
            }
        }
        
        int empty = 0;
        printf("Case #%d:", i + 1);
        for (int j = 0; j < rooms; j++) {
            if (room[j] == 0) {
                empty = 1;
                printf(" %d", j + 1);
            }
        }

        if (empty == 0) {
            printf(" No room left!\n");
        } else {
            printf("\n");
        }
    }
    return 0;
}