/*
Given an unsorted array Arr of size N of positive integers. One number 'A' from set {1, 2,....,N} is missing and one number 'B' occurs twice in array. Find these two numbers.

Example 1:

Input:
N = 2
Arr[] = {2, 2}
Output: 2 1
Explanation: Repeating number is 2 and 
smallest positive missing number is 1.
Example 2:

Input:
N = 3
Arr[] = {1, 3, 3}
Output: 3 2
Explanation: Repeating number is 3 and 
smallest positive missing number is 2.
Your Task:
You don't need to read input or print anything. Your task is to complete the function findTwoElement() which takes the array of integers arr and n as parameters and returns an array of integers of size 2 denoting the answer ( The first index contains B and second index contains A.)

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)

Constraints:
2 ≤ N ≤ 105
1 ≤ Arr[i] ≤ N*/

#include <stdio.h>
int mini(int crr[],int k)
{
    int min=crr[0];
    for(int i=0;i<k;i++)
    {
        if(crr[i]<min)
        {
            min=crr[i];
        }
    }
    printf("\nthe smallest lement missing in the array is: %d",min-1);
}

void repeatedele(int arr[], int n) {
    int count = 0;
    int k = 0;
    int brr[10];
    
    for(int i = 0; i < n; i++) {
        count = 1; // Reset count for each element
        for(int j = i + 1; j < n; j++) {
            if(arr[i] == arr[j]) {
                count++;
            }
        }
        if(count == 2) {
            brr[k] = arr[i];
            k++;
        }
    }
    
    printf("Repeated elements: ");
    for(int l = 0; l < k; l++) {
        printf("%d ", brr[l]);
    }
    
 
}

int main() {
    int n;
    printf("Enter the size of the array:");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    repeatedele(arr, n);
    mini(arr,n);

    return 0;
}
