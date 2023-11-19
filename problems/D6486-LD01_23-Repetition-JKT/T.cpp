#include <stdio.h>


int main () {

    int t;
    scanf("%d", &t);
    getchar();

    int clarify, solved, viewed;
    int count = 0;
    for (int i = 0; i < t; i++) {
        scanf("%d %d %d", &clarify, &solved, &viewed);
        getchar();
        if (solved > viewed) count++;
    }
    printf("%d\n", count);
    return 0;
}