#include <stdio.h>


int main() {

    for (int i = 0; i < 2; i++) {
        char a[21];
        char b[21];
        char c[21];

        scanf("%s %s %s", a, b, c);
        getchar();
        printf("%sszs %sszs %sszs\n", a, b, c);
    }

    return 0;
}