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
            case 9:
                pos = 21;
                break;
            case 33:
                pos = 42;
                break;
            case 76:
                pos = 92;
                break;
            case 53:
                pos = 37;
                break;
            case 80:
                pos = 59;
                break;
            case 97:
                pos = 88;
                break;
        }
    }

    printf("%d\n", pos);

    return 0;
}