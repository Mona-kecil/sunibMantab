#include <stdio.h>


int main () {

    int t;
    int pos = 0;
    scanf("%d", &t);
    getchar();

    for (int i = 0; i < t; i++) {
        int roll;
        scanf("%d", &roll);
        getchar();

        pos += roll;

        switch (pos) {
            case 12:
                pos = 28;
                break;
            case 35:
                pos = 7;
                break;
            case 30:
                pos = 10;
                break;
        }

        if (pos >= 40) pos -= 40;
    }

    printf("%d\n", pos);

    return 0;
}