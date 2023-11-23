#include <stdio.h>


int main () {
    int n;
    scanf("%d", &n);

    int members[n + 1] = {0};

    for (int i = 0; i < (n * n); i++) {
        int member;
        scanf("%d", &member);
        members[member - 1]++;
    }

    int count = 0;

    for (int i = 0; i < n; i++) {
        if (members[i] < n) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}