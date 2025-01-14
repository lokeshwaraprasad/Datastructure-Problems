#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Function to calculate the sum of squares of digits of a number
int squaredSum(int n) {
    int sum = 0;
    while (n > 0) {
        int digit = n % 10;  // Extract the last digit
        sum += digit * digit;  // Add the square of the digit to the sum
        n /= 10;  // Remove the last digit
    }
    return sum;
}

// Function to check if a number is a happy number
bool isHappy(int n) {
    int slow = squaredSum(n);  // Slow pointer starts at the first sum
    int fast = squaredSum(squaredSum(n));  // Fast pointer starts at the second sum

    // Loop until slow and fast pointers meet
    while (slow != fast) {
        slow = squaredSum(slow);  // Move slow pointer one step
        fast = squaredSum(squaredSum(fast));  // Move fast pointer two steps
    }

    // If slow equals 1, the number is happy
    return slow == 1;
}

// Main function
int main() {
    int n;
    printf("Enter a number to check if it is a happy number: ");
    scanf("%d", &n);

    if (isHappy(n)) {
        printf("%d is a happy number.\n", n);
    } else {
        printf("%d is not a happy number.\n", n);
    }

    return 0;
}
