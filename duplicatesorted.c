// code to remove duplicate elements in an sorted array::
#include <stdio.h>

// Function to remove duplicates from a sorted array
int removeDuplicates(int arr[], int n) {
    if (n == 0 || n == 1)
        return n;

    int j = 0; // Index of the next unique element

    // Traverse the array
    for (int i = 0; i < n - 1; i++) {
        // If current element is not equal to the next element
        if (arr[i] != arr[i + 1]) {
            arr[j] = arr[i]; 
            j++;// Store the unique element
        }
    }

    arr[j++] = arr[n - 1]; // Store the last element

    return j; // Return the new length of the array
}

int main() {
    int arr[] = {1,1,1,2,2,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    // Remove duplicates
    int newLength = removeDuplicates(arr, n);

    // Print array after removing duplicates
    printf("Array after removing duplicates: ");
    for (int i = 0; i < newLength; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

