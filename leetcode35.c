/*
35. Search Insert Position
Solved
Easy
Topics
Companies
Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [1,3,5,6], target = 5
Output: 2
Example 2:

Input: nums = [1,3,5,6], target = 2
Output: 1
Example 3:

Input: nums = [1,3,5,6], target = 7
Output: 4
 

Constraints:

1 <= nums.length <= 104
-104 <= nums[i] <= 104
nums contains distinct values sorted in ascending order.
-104 <= target <= 104*/
//code
#include <stdio.h>

int searchInsert(int* nums, int numsSize, int target) {
    int left = 0;
    int right = numsSize - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return left;
}

int main() {
    int nums1[] = {1, 3, 5, 6};
    int target1 = 5;
    printf("Output: %d\n", searchInsert(nums1, 4, target1)); // Output: 2
    
    int nums2[] = {1, 3, 5, 6};
    int target2 = 2;
    printf("Output: %d\n", searchInsert(nums2, 4, target2)); // Output: 1
    
    int nums3[] = {1, 3, 5, 6};
    int target3 = 7;
    printf("Output: %d\n", searchInsert(nums3, 4, target3)); // Output: 4
    
    return 0;
}
