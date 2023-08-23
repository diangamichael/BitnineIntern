//2: Memoization (Top-down Dynamic Programming)


#include <stdio.h>

int memo[1000]; // Adjust the array size as needed

int memoizedF(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    
    if (memo[n] != -1) return memo[n];
    
    memo[n] = memoizedF(n - 3) + memoizedF(n - 2);
    return memo[n];
}

int main() {
    int n = 10; // Change this to the desired value
    for (int i = 0; i < 1000; i++) memo[i] = -1;
    printf("F(%d) = %d\n", n, memoizedF(n));
    return 0;
}
