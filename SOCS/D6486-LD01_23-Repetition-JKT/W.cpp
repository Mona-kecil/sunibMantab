#include <stdio.h>


int main () {

    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        int count, number;
        int odd = 0, even = 0;

        scanf("%d", &count);
        getchar();
        for (int j = 0; j < count; j++) {
            scanf("%d", &number);
            getchar();
            (number % 2 == 0) ? even++ : odd++;
        }



        printf("Odd group : %d integer(s).\n", odd);
        printf("Even group : %d integer(s).\n", even);
        printf("\n");
    }


    return 0;
}