#include <stdio.h>

int main () {

    int t; 
    scanf("%d", &t);
    int n[t], m[t];

    for (int i = 0; i < t; i++) {
        scanf("%d %d", &n[i], &m[i]);
    }

    for (int i = 0; i < t; i++) {
        if (m[i] * n[i] % 2 == 0) {
            printf("Case #%d: Party time!\n", i + 1);
        } else {
            printf("Case #%d: Need more frogs\n", i + 1);
        }
    }

    return 0;
}
