#include <stdio.h>


int main () {

    int t;
    scanf("%d", &t);
    getchar();

    int array[t];

    for (int i = 0; i < t; i++) {
        scanf("%d", &array[i]); 
        getchar();
    }

    int maxDuplicate = 0;

    for (int i = 0; i < t; i++) {
        if (array[i] == -1)
            continue;
        
        int duplicate = 1;
        for (int j = i + 1; j < t; j++) {
            if (array[j] == -1)
                continue;
            
            if (array[i] == array[j]) {
                array[j] = -1;
                duplicate++;
            } 
        }
        if (maxDuplicate < duplicate)
            maxDuplicate = duplicate;
    }

    printf("%d\n", maxDuplicate);

    return 0;
}