#include <stdio.h>


void changeValue (int* array, int target, int newValue, int size) {
    target--;
    if (target >= 0 && target < size) array[target] = newValue;
}


void printItems (const int* array, int size, int i) {
    printf("Case #%d: ", i);
    for (int i = 0; i < size; i++) {
        (i != size - 1) ? printf("%d ", array[i]) : printf("%d\n", array[i]);
    }
}


int main () {
    int size;
    scanf("%d", &size);

    int items[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &items[i]);
    }

    int t;
    scanf("%d", &t);
    for (int i = 1; i <= t; i++) {
        int target, newValue;
        scanf("%d %d", &target, &newValue);
        changeValue(items, target, newValue, size);
        printItems(items, size, i);
    }
    return 0;
}