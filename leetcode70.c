//climbing stairs
#include <stdio.h>

int climbStairs(int n) {
    if (n == 1) {
        return 1;
    }
    if (n == 2) {
        return 2;
    }

    int prev1 = 1, prev2 = 2;
    int current;

    for (int i = 3; i <= n; i++) {
        current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }

    return current;
}

int main() {
    int n;
    printf("Enter the number of steps: ");
    scanf("%d", &n);

    int result = climbStairs(n);
    printf("Number of ways to climb %d steps: %d\n", n, result);

    return 0;
}
