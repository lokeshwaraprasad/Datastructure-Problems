/* Find Indexes of a subarray with given sum
MediumAccuracy: 16.5%Submissions: 1.5MPoints: 4
Find better job opportunities this summer via Job-A-Thon Hiring Challenge!

banner
Given an unsorted array A of size N that contains only non negative integers, find a continuous sub-array that adds to a given number S and return the left and right index(1-based indexing) of that subarray.

In case of multiple subarrays, return the subarray indexes which come first on moving from left to right.

Note:- You have to return an ArrayList consisting of two elements left and right. In case no such subarray exists return an array consisting of element -1.

Example 1:

Input:
N = 5, S = 12
A[] = {1,2,3,7,5}
Output: 2 4
Explanation: The sum of elements 
from 2nd position to 4th position 
is 12.
Example 2:

Input:
N = 10, S = 15
A[] = {1,2,3,4,5,6,7,8,9,10}
Output: 1 5
Explanation: The sum of elements 
from 1st position to 5th position
is 15.
Your Task:
You don't need to read input or print anything. The task is to complete the function subarraySum() which takes arr, N, and S as input parameters and returns an ArrayList containing the starting and ending positions of the first such occurring subarray from the left where sum equals to S. The two indexes in the array should be according to 1-based indexing. If no such subarray is found, return an array consisting of only one element that is -1.

Expected Time Complexity: O(N)
Expected Auxiliary Space: O(1)*/

#include <stdio.h>
#include <stdlib.h>

int* findSubarray(int A[], int N, int S) {
    int left = 0;
    int right = 0;
    int currentSum = 0;

    while (right < N) {
        currentSum += A[right];

        while (currentSum > S) {
            currentSum -= A[left];
            left++;
        }

        if (currentSum == S) {
            int* result = (int*)malloc(2 * sizeof(int));
            result[0] = left+1;
            result[1] = right+1;
            return result;
        }

        right++;
    }

    int* result = (int*)malloc(sizeof(int));
    result[0] = -1;
    return result;
}

int main() {
    int arr[] = {1,2,3,7,5};
    int sum = 12;
    int N = sizeof(arr) / sizeof(arr[0]);
    int* subarray = findSubarray(arr, N, sum);

    if (subarray[0] == -1) {
        printf("No such subarray exists.\n");
    } else {
        printf("Subarray found from index %d to %d.\n", subarray[0], subarray[1]);
    }

    free(subarray);
    return 0;
}
