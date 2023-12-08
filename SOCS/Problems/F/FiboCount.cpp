#include <stdio.h>

long long fibo_count(int n, long long memo[]) {
    if (memo[n] != -1) {
        return memo[n];
    }

    if (n == 0 || n == 1) {
        return 1;
    }

    memo[n] = 1 + fibo_count(n - 1, memo) + fibo_count(n - 2, memo);
    return memo[n];
}

int main() {
    int T;
    scanf("%d", &T);

    for (int case_num = 1; case_num <= T; ++case_num) {
        int n;
        scanf("%d", &n);

        // Initialize memoization array with -1
        long long memo[n + 1];
        for (int i = 0; i <= n; ++i) {
            memo[i] = -1;
        }

        long long result = fibo_count(n, memo);
        printf("Case #%d: %lld\n", case_num, result);
    }

    return 0;
}

