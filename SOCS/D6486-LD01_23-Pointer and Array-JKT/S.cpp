#include <stdio.h>
#include <string.h>

int main() {

    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        char number[11], add[11];
        scanf("%s %s", number, add);

        int len1 = strlen(number);
        int len2 = strlen(add);
        int j = len1 - 1;
        int k = len2 - 1;
        int sum = 0;
        int multiplier = 1;

        while (j >= 0 || k >= 0) {
            int digit1 = j >= 0 ? number[j] - '0' : 0;
            int digit2 = k >= 0 ? add[k] - '0' : 0;

            sum += ((digit1 + digit2) % 10) * multiplier;

            j--;
            k--;
            multiplier *= 10;
        }

        printf("Case #%d: %d\n", i, sum);
    }


    return 0;
}