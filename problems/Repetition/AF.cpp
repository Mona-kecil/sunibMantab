#include <stdio.h>


int main() {
    int tc;
    scanf("%d", &tc);

    for (int i = 0; i < tc; i++) {
        int n = 0;
        scanf("%d", &n);

        int arr[n];
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[j]);
        }

        int has_at_least_3_on_bits = 0;
        int has_less_than_3_on_bits = 0;
        
        for (int j = 0; j < n; j++) {
            for (int k = j+1; k < n; k++) {
                int xor_result = arr[j] ^ arr[k];
                // __builtin_popcount(xor_result) is a GCC built-in function that returns the number of 1-bits in xor_result.
                if (__builtin_popcount(xor_result) >= 3) { 
                    has_at_least_3_on_bits++;
                } else {
                    has_less_than_3_on_bits++;
                }
            }
        }

        printf("Case #%d: %d %d\n", i+1, has_at_least_3_on_bits, has_less_than_3_on_bits);
    }
}