/*findinfd duplicate #GEEKSFORGEEKS
Given an array a of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array. Return the answer in ascending order. If no such element is found, return list containing [-1]. 

Note: The extra space is only for the array to be returned. Try and perform all operations within the provided array. 

Example 1:

Input:
N = 4
a[] = {0,3,1,2}
Output: 
-1
Explanation: 
There is no repeating element in the array. Therefore output is -1.
Example 2:

Input:
N = 5
a[] = {2,3,1,2,3}
Output: 
2 3 
Explanation: 
2 and 3 occur more than once in the given array*/
#include <stdio.h>
#include <stdlib.h>

// Function to find duplicates in the array
int* duplicates(long long arr[], int n, int* returnSize) {
    int* duplicatesList = (int*)malloc(sizeof(int) * n);
    int index = 0;

    // Traverse the array
    for (int i = 0; i < n; ++i) {
        // Get the absolute value of the current element
        int absValue = llabs(arr[i]);

        // Check if the element at index is negative, if yes, it means it's a duplicate
        if (arr[absValue] < 0) {
            duplicatesList[index++] = absValue;
        } else {
            // Mark the element at index as visited by making it negative
            arr[absValue] = -arr[absValue];
        }
    }

    // If no duplicates found, return [-1]
    if (index == 0) {
        duplicatesList[index++] = -1;
    } else {
        // Sort the duplicates list in ascending order (using bubble sort)
        for (int i = 0; i < index - 1; ++i) {
            for (int j = 0; j < index - i - 1; ++j) {
                if (duplicatesList[j] > duplicatesList[j + 1]) {
                    // Swap elements
                    int temp = duplicatesList[j];
                    duplicatesList[j] = duplicatesList[j + 1];
                    duplicatesList[j + 1] = temp;
                }
            }
        }
    }

    *returnSize = index;
    return duplicatesList;
}

// Main function
int main() {
    // Example usage
    long long arr[] = {2, 3, 1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int returnSize;

    int* result = duplicates(arr, n, &returnSize);

    printf("Duplicate elements in the array are: ");
    for (int i = 0; i < returnSize; ++i) {
        printf("%d ", result[i]);
    }
    printf("\n");

    free(result); // Free allocated memory

    return 0;
}
