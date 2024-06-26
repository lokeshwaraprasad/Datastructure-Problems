/*
11. Container With Most Water
Solved
Medium
Topics
Companies
Hint
You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

 

Example 1:


Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
Example 2:

Input: height = [1,1]
Output: 1
 

Constraints:

n == height.length
2 <= n <= 105
0 <= height[i] <= 104*/
//code

#include <stdio.h>

// Function to find the maximum water container
int maxArea(int* height, int heightSize) {
    int left = 0; // Initialize the left pointer
    int right = heightSize - 1; // Initialize the right pointer
    int max_area = 0; // Variable to store the maximum area
    
    while (left < right) {
        // Calculate the width between the left and right pointers
        int width = right - left;
        // Calculate the height of the container, which is the minimum of the two heights
        int container_height = (height[left] < height[right]) ? height[left] : height[right];
        // Calculate the area of the container
        int current_area = width * container_height;
        // Update the maximum area if the current area is larger
        if (current_area > max_area) {
            max_area = current_area;
        }
        // Move the pointer that points to the shorter line
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    return max_area;
}

int main() {
    int height1[] = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int size1 = sizeof(height1) / sizeof(height1[0]);
    printf("Max area: %d\n", maxArea(height1, size1)); // Output: 49

    int height2[] = {1, 1};
    int size2 = sizeof(height2) / sizeof(height2[0]);
    printf("Max area: %d\n", maxArea(height2, size2)); // Output: 1

    return 0;
}
