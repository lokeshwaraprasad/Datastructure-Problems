/*
Given an array arr[] of N non-negative integers representing the height of blocks. If width of each block is 1, compute how much water can be trapped between the blocks during the rainy season. 
 

Example 1:

Input:
N = 6
arr[] = {3,0,0,2,0,4}
Output:
10
Explanation: 

Example 2:

Input:
N = 4
arr[] = {7,4,0,9}
Output:
10
Explanation:
Water trapped by above 
block of height 4 is 3 units and above 
block of height 0 is 7 units. So, the 
total unit of water trapped is 10 units.
Example 3:

Input:
N = 3
arr[] = {6,9,9}
Output:
0
Explanation:
No water will be trapped.

Your Task:
You don't need to read input or print anything. The task is to complete the function trappingWater() which takes arr[] and N as input parameters and returns the total amount of water that can be trapped.


Expected Time Complexity: O(N)
Expected Auxiliary Space: O(N)


Constraints:
3 < N < 106
0 < Ai < 108*/

#include <stdio.h>

int watertank(int arr[],int n,int second_lar)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=second_lar)
        {
            count+=0;
        }
        else{
            count+= second_lar-arr[i];
        }
    }
    printf("%d",count);
}

int main() {
    int n;
    
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    

    int largest = arr[0];
    int second_largest = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }
    
    watertank(arr,n,second_largest);
    
    // Print the second largest element
   // printf("The second largest element in the array is: %d\n", second_largest);
    
    return 0;
}