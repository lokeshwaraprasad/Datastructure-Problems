/*
Objective
This challenge will help you learn the concept of recursion.

A function that calls itself is known as a recursive function. The C programming language supports recursion. But while using recursion, one needs to be careful to define an exit condition from the function, otherwise it will go into an infinite loop.

To prevent infinite recursion,  statement (or similar approach) can be used where one branch makes the recursive call and other doesn't.

void recurse() {
    .....
    recurse()  //recursive call
    .....
}
int main() {
    .....
    recurse(); //function call
    .....
}
Task

There is a series, , where the next term is the sum of pervious three terms. Given the first three terms of the series, , , and  respectively, you have to output the nth term of the series using recursion.

Recursive method for calculating nth term is given below.

Input Format

The first line contains a single integer, .

The next line contains 3 space-separated integers, , , and .

Constraints

Output Format

Print the nth term of the series, .

Sample Input 0

5
1 2 3
Sample Output 0

11
Explanation 0

Consider the following steps:

From steps , , , and , we can say ; then using the values from step , , , and , we get . Thus, we print  as our answer.

Language: C
More
123456789101112131415161718192021222324
    if (n == 3) return c;
    
    return nthTerm(n-1, a, b, c) + nthTerm(n-2, a, b, c) + nthTerm(n-3, a, b, c);
}

int main() {
    int n, a, b, c;
  
    scanf("%d %d %d %d", &n, &a, &b, &c);
    int ans = nthTerm(n, a, b, c);

Line: 20 Col: 19

Test against custom input
C language
You have earned 15.00 points!
You are now 240 points away from the gold level for your c badge.
20%260/500
Congratulations
You solved this challenge. Would you like to challenge your friends?Share on FacebookShare on TwitterShare on LinkedIn

Test case 0

Test case 1

Test case 2

Test case 3

Test case 4

Test case 5

Test case 6

Test case 7

Test case 8

Test case 9

Test case 10

Test case 11

Test case 12

Test case 13
Compiler Message
Success
Input (stdin)
5
1 2 3
Expected Output
11
*/
#include <stdio.h>

int nthTerm(int n, int a, int b, int c) {
    if (n == 1) return a;
    if (n == 2) return b;
    if (n == 3) return c;
    
    return nthTerm(n-1, a, b, c) + nthTerm(n-2, a, b, c) + nthTerm(n-3, a, b, c);
}

int main() {
    int n, a, b, c;
    scanf("%d", &n);
    scanf("%d %d %d", &a, &b, &c);
    
    printf("%d\n", nthTerm(n, a, b, c));
    
    return 0;
}
