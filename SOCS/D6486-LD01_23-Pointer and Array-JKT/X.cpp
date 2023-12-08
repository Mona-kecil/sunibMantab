#include <stdio.h>


int main() {
    int t;
    scanf("%d", &t);

    for (int i = 1; i <= t; i++) {
        int children, box;
        scanf("%d %d", &children, &box);

        long long sum = 0;

        for (int j = 0; j < children; j++) {
            int weight;
            int maxWeight = 0;
            for (int k = 0; k < box; k++) {
                scanf("%d", &weight);
                if (weight > maxWeight) {
                    maxWeight = weight;
                }
            }
            sum += maxWeight;
        }
        printf("Case #%d: %lld\n", i, sum);
    }
    return 0;
}