#include <stdio.h>
#include <string.h>

int main() {
    int t;
    scanf("%d", &t);
    getchar();

    for (int i = 1; i <= t; i++) {
        char string[1001];
        char print[1001];
        scanf("%s", string);
        getchar();

        int len = strlen(string);
        int reader = 0;

        /*
        Warning: this code is shit
        pls do not use
        I just wanted to get this shit done and play games
        */ 

        for (int j = 0; j < len; j++) {
            if (string[j] >= 'U') {
                print[reader++] = 'U';
            } else if (string[j] >= 'O') {
                print[reader++] = 'O';
            } else if (string[j] >= 'I') {
                print[reader++] = 'I';
            } else if (string[j] >= 'E') {
                print[reader++] = 'E';
            } else if (string[j] >= 'A') {
                print[reader++] = 'A';
            }
        }
        print[reader] = '\0';
        printf("Case #%d:\n%s\n", i, print);

        for (int j = 0; j < len; j++) {
            if (string[j] >= 'U') {
                printf("%d", string[j] - 'U');
            } else if (string[j] >= 'O') {
                printf("%d", string[j] - 'O');
            } else if (string[j] >= 'I') {
                printf("%d", string[j] - 'I');
            } else if (string[j] >= 'E') {
                printf("%d", string[j] - 'E');
            } else if (string[j] >= 'A') {
                printf("%d", string[j] - 'A');
            } 
        }
        printf("\n");
    }


    return 0;
}