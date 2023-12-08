#include <stdio.h>


// void reverseCode (char code[], char start, char end) {
//     int startIndex, endIndex;
//     int index = 0;

//     // Get indexes
//     while (code[index] != '\0') {
//         if (code[index] == start) {
//             startIndex = index;
//         }
//         if (code[index] == end) {
//             endIndex = index;
//         }
//         index++;
//     }

//     // Reverse
//     for (int i = startIndex; i <= (startIndex + endIndex) / 2; i++) {
//         char temp = code[i];
//         code[i] = code[endIndex - (i - startIndex)];
//         code[endIndex - (i - startIndex)] = temp;
//     }
// }


int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int pairs;
        scanf("%d", &pairs);
        getchar();

        char code[1001];
        scanf("%s", code);
        getchar();

        for (int j = 0; j < pairs; j++) {
            int start, end;
            scanf("%d %d", &start, &end);
            getchar();

            // Reverse by index
            start--; end--;
            while (start < end) {
                char temp = code[start];
                code[start] = code[end];
                code[end] = temp;
                start++;
                end--;
            }
        }

        printf("Case #%d: %s\n", i, code);
    }
    return 0;
}