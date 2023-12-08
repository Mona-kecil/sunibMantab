#include <stdio.h>


int main () {

    int t;
    scanf("%d", &t);
    getchar();

    int num;
    int total = 0;
    for (int i = 0; i < t; i++) {
        scanf("%d", &num);
        getchar();
        total += num;
    }
    printf("%d\n", total);

    return 0;
}