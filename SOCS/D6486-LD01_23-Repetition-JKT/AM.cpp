#include <stdio.h>


int main () {
    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        int number;
        scanf("%d", &number);
        getchar();

        printf("Case #%d:\n", i);
        for (int j = 1; j <= number; j++) {
            ((j % 3 == 0 || j % 5 == 0) && j % 15 != 0) ? printf("%d Jojo\n", j) : printf("%d Lili\n", j);
        }
    }
    return 0;
}