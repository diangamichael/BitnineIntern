// 1: Recursive Function

#include <stdio.h>

int recursiveF(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    if (n == 2) return 2;
    return recursiveF(n - 3) + recursiveF(n - 2);
}

int main() {
    int n = 10; // Change this to the desired value
    printf("F(%d) = %d\n", n, recursiveF(n));
    return 0;
}
