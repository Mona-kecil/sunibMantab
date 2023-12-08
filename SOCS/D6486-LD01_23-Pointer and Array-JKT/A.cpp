#include <stdio.h>


int main () {
    int days;
    scanf("%d", &days);
    
    int views[days];
    for (int i = 0; i < days; i++) {
        scanf("%d", &views[i]);
    }

    int friends;
    scanf("%d", &friends);
    for (int i = 1; i <= friends; i++) {
        int start, end;
        int viewOnDay = 0;
        scanf("%d %d", &start, &end);
        for (int j = (start - 1); j < end; j++) {
            viewOnDay += views[j];
        }
        printf("Case #%d: %d\n", i, viewOnDay);
    }


    return 0;
}