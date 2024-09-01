/*
MIN To MAX
You are given an array 
A
A of size 
N
N.

Let 
M
M be the minimum value present in the array initially.
In one operation, you can choose an element 
A
i
A 
i
​
  
(
1
≤
i
≤
N
)
(1≤i≤N) and an integer 
X
X 
(
1
≤
X
≤
100
)
(1≤X≤100), and set 
A
i
=
X
A 
i
​
 =X.

Determine the minimum number of operations required to make 
M
M the maximum value in the array 
A
A.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases.
Each test case consists of multiple lines of input.
The first line of each test case contains a single integer 
N
N - the size of the array.
The next line of each test case contains 
N
N space-separated integers 
A
1
,
A
2
,
…
,
A
N
A 
1
​
 ,A 
2
​
 ,…,A 
N
​
  - the elements of the array.
Output Format
For each test case, output on a new line, the minimum number of operations required to make 
M
M the maximum value in the array 
A
A.

Constraints
1
≤
T
≤
100
1≤T≤100
1
≤
N
≤
100
1≤N≤100
1
≤
A
i
≤
100
1≤A 
i
​
 ≤100
Sample 1:
Input
Output
3
2
1 2
4
2 2 3 4
1
1
1
2
0
Explanation:
Test case 
1
1: The minimum value in the array, 
M
M, is initially 
1
1. We can use one operation as following:

Choose 
A
2
A 
2
​
  and set it as 
X
=
1
X=1. Thus, the final array becomes 
[
1
,
1
]
[1,1].
Since all elements of the final array are 
1
1, the maximum value of the array is now 
1
1. It can be shown that this is the minimum number of operations required to do so.

Test case 
2
2: The minimum value in the array, 
M
M, is initially 
2
2. We can use two operations as following:

Choose 
A
4
A 
4
​
  and set it as 
X
=
2
X=2. Thus, the array becomes 
[
2
,
2
,
3
,
2
]
[2,2,3,2].
Choose 
A
3
A 
3
​
  and set it as 
X
=
2
X=2. Thus, the array becomes 
[
2
,
2
,
2
,
2
]
[2,2,2,2].
Since all elements of the final array are 
2
2, the maximum value of the array is now 
2
2.

Test case 
3
3: The minimum value in the array, 
M
M, is initially 
1
1. It is also the maximum value of the array. Hence, no operations are required.*/

//code:
#include <stdio.h>
int cal(int n,int arr[])
{
    if(n==1)
    {
        return 0;
    }
    else
    {
        int min=arr[0];
    for(int i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
            
        }
    }
    int count=0;
     for(int i=0;i<n;i++)
     {
         if(arr[i]!=min)
         {
             count++;
         }
         
     }
     return count;
    }
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n;
        scanf("%d", &n);
        int a[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &a[i]);
        }
        int res;
        res=cal(n,a);
        printf("%d\n",res);

        
    }

    return 0;
}
