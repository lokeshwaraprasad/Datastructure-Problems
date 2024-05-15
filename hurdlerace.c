/*
A video player plays a game in which the character competes in a hurdle race. Hurdles are of varying heights, and the characters have a maximum height they can jump. There is a magic potion they can take that will increase their maximum jump height by  unit for each dose. How many doses of the potion must the character take to be able to jump all of the hurdles. If the character can already clear all of the hurdles, return .

Example


The character can jump  unit high initially and must take  doses of potion to be able to jump all of the hurdles.

Function Description

Complete the hurdleRace function in the editor below.

hurdleRace has the following parameter(s):

int k: the height the character can jump naturally
int height[n]: the heights of each hurdle
Returns

int: the minimum number of doses required, always  or more
Input Format

The first line contains two space-separated integers  and , the number of hurdles and the maximum height the character can jump naturally.
The second line contains  space-separated integers  where .

Constraints

Sample Input 0

5 4
1 6 3 5 2
Sample Output 0

2
Explanation 0

Dan's character can jump a maximum of  units, but the tallest hurdle has a height of :

image

To be able to jump all the hurdles, Dan must drink  doses.

Sample Input 1

5 7
2 5 4 5 2
Sample Output 1

0
Explanation 1

Dan's character can jump a maximum of  units, which is enough to cross all the hurdles:

image

Because he can already jump all the hurdles, Dan needs to drink  doses.

Language
C
More
5657585960616263646566676869707172737475767778798081
       return max;
   }
   else {
   {
       return 0;
   }
   }
}

int main()

Line: 45 Col: 17

Test against custom input
Wrong Answer :(

2/2 test cases failed


Sample Test case 0

Sample Test case 1
Compiler Message
Wrong Answer
Input (stdin)
5 4
1 6 3 5 2
Your Output (stdout)
1
Expected Output
2
*/

#include <stdio.h>
int max(int arr[],int n,int height)
{
   int max=arr[0];
   for(int i=1;i<n;i++)
   {
       if(arr[i]>max)
       {
           max=arr[i];
       }
   }
   return max;
}

int main()
{
    int n;
    printf("enter the size of the array:");
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int h;
    printf("Enter the maximum height he can jump:");
    scanf("%d",&h);
    
int a=max(arr,n,h);
if(a>h)
{
    a=a-h;
    printf("\n\n%d",a);
}
else{
    printf("0");
}
}
