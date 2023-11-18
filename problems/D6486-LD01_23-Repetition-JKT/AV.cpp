#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);

    unsigned long long combination = 0;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            int k = n - i - j;
            if (k >= 0 && k <= n) {
                combination++;
            }
        }
    }

    printf("%llu\n", combination);
    return 0;
}