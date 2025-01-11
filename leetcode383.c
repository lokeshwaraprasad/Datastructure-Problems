/*
LeetCode Logo
Problem List
0

avatar
Description
Accepted
Accepted
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
383. Ransom Note
Solved
Easy
Topics
Companies
Given two strings ransomNote and magazine, return true if ransomNote can be constructed by using the letters from magazine and false otherwise.

Each letter in magazine can only be used once in ransomNote.

 

Example 1:

Input: ransomNote = "a", magazine = "b"
Output: false
Example 2:

Input: ransomNote = "aa", magazine = "ab"
Output: false
Example 3:

Input: ransomNote = "aa", magazine = "aab"
Output: true
 

Constraints:

1 <= ransomNote.length, magazine.length <= 105
ransomNote and magazine consist of lowercase English letters.
Seen this question in a real interview before?
1/5
Yes
No
Accepted
1.4M
Submissions
2.3M
Acceptance Rate
63.5%
Topics
Companies
Similar Questions
Discussion (100)

Choose a type



Copyright ©️ 2025 LeetCode All rights reserved

5.2K


100



99 Online
C++
Auto





101112131415161718
      if (count[c - 'a'] == 0)
        return false;
      --count[c - 'a'];
    }

    return true;
  }
};
Saved

Case 1
Case 2
Case 3

ransomNote =
"a"
magazine =
"b"

Tag

*/

//code

#include <stdbool.h>
#include <string.h>

bool canConstruct(char *ransomNote, char *magazine) {
    int count[26] = {0}; // Array to store character frequencies

    // Count characters in the magazine
    for (int i = 0; magazine[i] != '\0'; i++) {
        count[magazine[i] - 'a']++;
    }

    // Check if ransomNote can be constructed
    for (int i = 0; ransomNote[i] != '\0'; i++) {
        if (count[ransomNote[i] - 'a'] == 0) {
            return false; // Character not available
        }
        count[ransomNote[i] - 'a']--; // Use the character
    }

    return true; // All characters are available
}
