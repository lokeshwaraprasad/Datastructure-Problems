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
832. Flipping an Image
Solved
Easy
Topics
Companies
Given an n x n binary matrix image, flip the image horizontally, then invert it, and return the resulting image.

To flip an image horizontally means that each row of the image is reversed.

For example, flipping [1,1,0] horizontally results in [0,1,1].
To invert an image means that each 0 is replaced by 1, and each 1 is replaced by 0.

For example, inverting [0,1,1] results in [1,0,0].
 

Example 1:

Input: image = [[1,1,0],[1,0,1],[0,0,0]]
Output: [[1,0,0],[0,1,0],[1,1,1]]
Explanation: First reverse each row: [[0,1,1],[1,0,1],[0,0,0]].
Then, invert the image: [[1,0,0],[0,1,0],[1,1,1]]
Example 2:

Input: image = [[1,1,0,0],[1,0,0,1],[0,1,1,1],[1,0,1,0]]
Output: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
Explanation: First reverse each row: [[0,0,1,1],[1,0,0,1],[1,1,1,0],[0,1,0,1]].
Then invert the image: [[1,1,0,0],[0,1,1,0],[0,0,0,1],[1,0,1,0]]
 

Constraints:

n == image.length
n == image[i].length
1 <= n <= 20
images[i][j] is either 0 or 1.
Seen this question in a real interview before?
1/5
Yes
No
Accepted
472.1K
Submissions
571.3K
Acceptance Rate
82.6%
Topics
Companies
Discussion (36)

Choose a type



Copyright ©️ 2025 LeetCode All rights reserved

3.5K


36



11 Online
C++
Auto





101112131415
class Solution {
 public:
  vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
    const int n = A.size();

    for (int i = 0; i < n; ++i)
      for (int j = 0; j < (n + 1) / 2; ++j) {
        const int temp = A[i][j];
        A[i][j] = A[i][n - j - 1] ^ 1;
        A[i][n - j - 1] = temp ^ 1;

Restored from local
Upgrade to Cloud Saving

Case 1
Case 2

image =
[[1,1,0],[1,0,1],[0,0,0]]



*/

//code:

class Solution {
 public:
  vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {
    const int n = A.size();

    for (int i = 0; i < n; ++i)
      for (int j = 0; j < (n + 1) / 2; ++j) {
        const int temp = A[i][j];
        A[i][j] = A[i][n - j - 1] ^ 1;
        A[i][n - j - 1] = temp ^ 1;
      }

    return A;
  }
};