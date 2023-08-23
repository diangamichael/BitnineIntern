//3: Bottom-up Dynamic Programming

#include <stdio.h>

int bottomUpF(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;

    int dp[n + 1];
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 3] + dp[i - 2];
    }

    return dp[n];
}

int main() {
    int n = 10; // Change this to the desired value
    printf("F(%d) = %d\n", n, bottomUpF(n));
    return 0;
}

