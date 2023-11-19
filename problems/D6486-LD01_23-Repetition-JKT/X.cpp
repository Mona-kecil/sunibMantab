#include <stdio.h>


int main () {

    int number = 1;
    int process;
    scanf("%d", &process);
    getchar();

    for (int i = 1; i <= process; i++) {
        number *= 2;
        number += 1;
    }

    printf("%d\n", number);

    return 0;
}