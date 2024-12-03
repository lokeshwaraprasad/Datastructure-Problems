/*
 * LeetCode Logo
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
506. Relative Ranks
Easy
Topics
Companies
You are given an integer array score of size n, where score[i] is the score of the ith athlete in a competition. All the scores are guaranteed to be unique.

The athletes are placed based on their scores, where the 1st place athlete has the highest score, the 2nd place athlete has the 2nd highest score, and so on. The placement of each athlete determines their rank:

The 1st place athlete's rank is "Gold Medal".
The 2nd place athlete's rank is "Silver Medal".
The 3rd place athlete's rank is "Bronze Medal".
For the 4th place to the nth place athlete, their rank is their placement number (i.e., the xth place athlete's rank is "x").
Return an array answer of size n where answer[i] is the rank of the ith athlete.

 

Example 1:

Input: score = [5,4,3,2,1]
Output: ["Gold Medal","Silver Medal","Bronze Medal","4","5"]
Explanation: The placements are [1st, 2nd, 3rd, 4th, 5th].
Example 2:

Input: score = [10,3,8,9,4]
Output: ["Gold Medal","5","Bronze Medal","Silver Medal","4"]
Explanation: The placements are [1st, 5th, 3rd, 2nd, 4th].

 

Constraints:

n == score.length
1 <= n <= 104
0 <= score[i] <= 106
All the values in score are unique.
Seen this question in a real interview before?
1/5
Yes
No
Accepted
321.8K
Submissions
443.5K
Acceptance Rate
72.6%
Topics
Companies
Discussion (95)

Choose a type



Copyright ©️ 2024 LeetCode All rights reserved

2K


95



17 Online
Java
Auto





12345
class Solution {
    public String[] findRelativeRanks(int[] score) {
        
    }
}
Saved

Case 1
Case 2

score =
[5,4,3,2,1]

Tag

 */

 //code:

 import java.util.Arrays;

class Solution {
    public String[] findRelativeRanks(int[] score) {
        int n = score.length;
        String[] result = new String[n];
        
        // Create an array to store the original index and score
        int[][] athletes = new int[n][2];
        for (int i = 0; i < n; i++) {
            athletes[i][0] = score[i]; // Store the score
            athletes[i][1] = i;       // Store the original index
        }
        
        // Sort the array based on scores in descending order
        Arrays.sort(athletes, (a, b) -> b[0] - a[0]);
        
        // Assign ranks based on position
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                result[athletes[i][1]] = "Gold Medal";
            } else if (i == 1) {
                result[athletes[i][1]] = "Silver Medal";
            } else if (i == 2) {
                result[athletes[i][1]] = "Bronze Medal";
            } else {
                result[athletes[i][1]] = String.valueOf(i + 1);
            }
        }
        
        return result;
    }
}
