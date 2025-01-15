/*
LeetCode Logo
Problem List
0

avatar
Premium
Description
Editorial
Editorial
Solutions
Solutions
Submissions
Submissions


Code
Testcase
Test Result
Test Result
74. Search a 2D Matrix
Solved
Medium
Topics
Companies
You are given an m x n integer matrix matrix with the following two properties:

Each row is sorted in non-decreasing order.
The first integer of each row is greater than the last integer of the previous row.
Given an integer target, return true if target is in matrix or false otherwise.

You must write a solution in O(log(m * n)) time complexity.

 

Example 1:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true
Example 2:


Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 13
Output: false
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 100
-104 <= matrix[i][j], target <= 104
Seen this question in a real interview before?
1/5
Yes
No
Accepted
2.1M
Submissions
4.2M
Acceptance Rate
51.5%
Topics
Companies
Similar Questions
Discussion (217)

Choose a type



Copyright ©️ 2025 LeetCode All rights reserved

16.4K


217



124 Online
C++
Auto





12345678910
class Solution {
 public:
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if (matrix.empty())
      return false;

    const int m = matrix.size();
    const int n = matrix[0].size();
    int l = 0;
    int r = m * n;

Restored from local
Upgrade to Cloud Saving

Case 1
Case 2

matrix =
[[1,3,5,7],[10,11,16,20],[23,30,34,60]]
target =
3



*/
//code:
class Solution {
 public:
  bool searchMatrix(vector<vector<int>>& matrix, int target) {
    if (matrix.empty())
      return false;

    const int m = matrix.size();
    const int n = matrix[0].size();
    int l = 0;
    int r = m * n;

    while (l < r) {
      const int mid = (l + r) / 2;
      const int i = mid / n;
      const int j = mid % n;
      if (matrix[i][j] == target)
        return true;
      if (matrix[i][j] < target)
        l = mid + 1;
      else
        r = mid;
    }

    return false;
  }
};