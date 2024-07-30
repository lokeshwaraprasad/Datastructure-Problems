/*
Take discount or Not
There are 
N
N items in a shop. You know that the price of the 
i
i-th item is 
A
i
A 
i
​
 . Chef wants to buy all the 
N
N items.

There is also a discount coupon that costs 
X
X rupees and reduces the cost of every item by 
Y
Y rupees. If the price of an item was initially 
≤
Y
≤Y, it becomes free, i.e, costs 
0
0.

Determine whether Chef should buy the discount coupon or not. Chef will buy the discount coupon if and only if the total price he pays after buying the discount coupon is strictly less than the price he pays without buying the discount coupon.

Input Format
The first line of input will contain a single integer 
T
T, denoting the number of test cases. The description of the test cases follows.
Each test case consists of two lines of input.
The first line of the test case contains three space-separated integers — 
N
N, 
X
X, and 
Y
Y.
The second line contains 
N
N space-separated integers — 
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
 .
Output Format
For each test case, output COUPON if Chef should buy the discount coupon, and NO COUPON otherwise.
Each letter of the output may be printed in either lowercase or uppercase. For example, the strings coupon, CouPoN, and COUPON will all be treated as equivalent.

Constraints
1
≤
T
≤
1000
1≤T≤1000
1
≤
N
≤
100
1≤N≤100
1
≤
X
,
Y
≤
1
0
5
1≤X,Y≤10 
5
 
1
≤
A
i
≤
1
0
5
1≤A 
i
​
 ≤10 
5
 
Sample 1:
Input
Output
5
4 30 10
15 8 22 6
4 40 10
15 8 22 6
4 34 10
15 8 22 6
2 10 100
60 80
3 30 5
50 60 50
COUPON
NO COUPON
NO COUPON
COUPON
NO COUPON
Explanation:
Test case 
1
1: The original cost of the items is 
15
+
8
+
22
+
6
=
51
15+8+22+6=51. Buying the coupon costs 
30
30, and after buying it the cost of buying all the items is 
5
+
0
+
12
+
0
=
17
5+0+12+0=17. The total cost of buying everything with the coupon is 
30
+
17
=
47
30+17=47, which is strictly less than 
51
51. So, Chef will buy the coupon.

Test case 
2
2: The original cost of the items is 
15
+
8
+
22
+
6
=
51
15+8+22+6=51. Buying the coupon costs 
40
40, and after buying it the cost of buying all the items is 
5
+
0
+
12
+
0
=
17
5+0+12+0=17. The total cost of buying everything with the coupon is 
40
+
17
=
57
40+17=57, which is more than 
51
51. So, Chef will not buy the coupon.

Test case 
3
3: The original cost of the items is 
51
51. Buying the coupon costs 
34
34, and the cost of buying all the items after using it is 
17
17, making the total cost 
34
+
17
=
51
34+17=51. Since this is not strictly less than the original cost, Chef won't buy the coupon.

Test case 
4
4: The original cost of the items is 
140
140, the coupon costs 
10
10, and the cost of buying everything after using the coupon is 
0
0. Since 
10
+
0
<
140
10+0<140, Chef will buy the coupon.

Did you like the problem?
45 users found this helpful*/
//c code
#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, x, y;
        scanf("%d %d %d", &n, &x, &y);
        int arr[n];

        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }
        // Your code goes here
        int sum=0;
        int sum1=x;
        for(int i=0;i<n;i++)
        {
            sum=sum+arr[i];
        }
        sum1=x;
        for(int i=0;i<n;i++)
        {
            if(arr[i]>y)
            {
                int a=arr[i]-y;
                sum1=sum1+a;
            }
            else if(arr[i]<=y)
            {
                sum1=sum1+0;
            }
        }
        if(sum>sum1)
        {
            printf("Coupon\n");
        }
        else
        {
            printf("No Coupon\n");
        }
    }
    
    

    return 0;
}
