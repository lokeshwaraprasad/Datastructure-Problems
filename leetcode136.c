/*

Code
Testcase
Testcase
Test Result
136. Single Number
Solved
Easy
Topics
Companies
Hint
Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

You must implement a solution with a linear runtime complexity and use only constant extra space.

 

Example 1:

Input: nums = [2,2,1]
Output: 1
Example 2:

Input: nums = [4,1,2,1,2]
Output: 4
Example 3:

Input: nums = [1]
Output: 1
 

Constraints:

1 <= nums.length <= 3 * 104
-3 * 104 <= nums[i] <= 3 * 104
Each element in the array appears twice except for one element which appears only once.*/

//the function:
/*
int singleNumber(int* nums, int numsSize) {
     if (numsSize == 1) {
        return nums[0];
    }
    
    for (int i = 0; i < numsSize; i++) {
        int count = 0;
        for (int j = 0; j < numsSize; j++) {
            if (nums[i] == nums[j] && i != j) {
                count++;
            }
        }
        if (count == 0) {
            return nums[i];
        }
    }
    return -1;
    
}*/

//the entire C code:


#include <stdio.h>

int main()
{
    int n;
    printf("Enter the array size: ");
    scanf("%d", &n);
    
    if (n > 10) {
        printf("Array size should not be greater than 10.\n");
        return 1;
    }
    
    int arr[10];
    printf("Enter the array elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    if (n == 1)
    {
        printf("The first unique element is: %d\n", arr[0]);
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (arr[i] == arr[j] && i != j)
                {
                    count++;
                }
            }
            if (count == 0)
            {
                printf("The first unique element is: %d\n", arr[i]);
                return 0;
            }
        }
        printf("There is no unique element in the array.\n");
    }
    return 0;
}
