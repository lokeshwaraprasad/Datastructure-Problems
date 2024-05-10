/*

Code
Code
Runtime Error
Testcase
Testcase
Test Result
7. Reverse Integer
Medium
Topics
Companies
Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

Example 1:

Input: x = 123
Output: 321
Example 2:

Input: x = -123
Output: -321
Example 3:

Input: x = 120
Output: 21*/


#include <stdio.h>
#include <limits.h>

int reverse(int x) {
    long long reversed = 0; // Use long long to handle potential overflow
    while (x != 0) {
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }
    // Check if reversed integer is within the 32-bit signed integer range
    if (reversed < INT_MIN || reversed > INT_MAX) {
        return 0;
    }
    return (int)reversed;
}

int main() {
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);

    int reversed = reverse(x);

    printf("Reversed integer: %d\n", reversed);

    return 0;
}