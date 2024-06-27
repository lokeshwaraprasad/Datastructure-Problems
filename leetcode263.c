/*

Code
Testcase
Testcase
Test Result
263. Ugly Number
Solved
Easy
Topics
Companies
An ugly number is a positive integer whose prime factors are limited to 2, 3, and 5.

Given an integer n, return true if n is an ugly number.

 

Example 1:

Input: n = 6
Output: true
Explanation: 6 = 2 × 3
Example 2:

Input: n = 1
Output: true
Explanation: 1 has no prime factors, therefore all of its prime factors are limited to 2, 3, and 5.
Example 3:

Input: n = 14
Output: false
Explanation: 14 is not ugly since it includes the prime factor 7.
 

Constraints:

-231 <= n <= 231 - 1*/

// c cde
#include <stdio.h>
#include <stdbool.h>

bool isUgly(int n) {
    if (n <= 0) {
        return false;
    }
    
    // Continue dividing n by 2, 3, and 5 while possible
    while (n % 2 == 0) {
        n /= 2;
    }
    while (n % 3 == 0) {
        n /= 3;
    }
    while (n % 5 == 0) {
        n /= 5;
    }

    // If after removing all 2, 3, and 5 factors, n becomes 1, then it's an ugly number
    return n == 1;
}

int main() {
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);

    if (isUgly(n)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
