/*
283. Move Zeroes
Solved
Easy
Topics
Companies
Hint
Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.

 

Example 1:

Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]
Example 2:

Input: nums = [0]
Output: [0]
 

Constraints:

1 <= nums.length <= 104
-231 <= nums[i] <= 231 - 1*/

//function:
/*
void moveZeroes(int* arr, int n) {
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[count++]=arr[i];
        }
    }
    while(count<n)
    {
        arr[count++]=0;
    }
    
}*/
//code



#include <stdio.h>

int main()
{
    int n;
    printf("Enter the size of the aray:");
    scanf("%d",&n);
    int arr[10];
    printf("\nenter the array elements:");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            arr[count++]=arr[i];
        }
    }
    while(count<n)
    {
        arr[count++]=0;
    }
    printf("\n the array elements:");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}