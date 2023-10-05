#include <stdio.h>

int main () {
    int a, b, c;
    int counter = 0;
    scanf("%d %d %d", &a, &b, &c);

    while ((a < b) && (a != c)) {
        a++;
        b--;
        counter++;
    }

    if ((a == b) && (a == c)) {
        printf("%d\n", counter);
    } else {
        printf("-1\n");
    }

    return 0;
}