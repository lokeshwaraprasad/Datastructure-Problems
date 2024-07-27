/*
Search an element in an array
You are given an array 
𝐴
A of size 
𝑁
N and an element 
𝑋
X. Your task is to find whether the array 
𝐴
A contains the element 
𝑋
X or not.

Input Format
The first line contains two space-separated integers 
𝑁
N and 
𝑋
X — the size of array and the element to be searched.
The second line contains all the elements of array 
𝐴
A
Output Format
Output "YES" if the element 
𝑋
X is present in 
𝐴
A, otherwise output "NO".

Constraints
1
≤
𝑁
≤
1
0
5
1≤N≤10 
5
 
1
≤
𝐴
𝑖
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
5 3
7 3 5 2 1
YES
Sample 2:
Input
Output
5 10
7 3 5 2 1
NO*/

//solution
#include <stdio.h>

int main(void) {
	// your code goes heren
	int count=0;
	int n,key;
	scanf("%d %d",&n,&key);
	int arr[n];
	for(int i=0;i<n;i++)
	{
	    scanf("%d",&arr[i]);
	}
	
	for(int i=0;i<n;i++)
	{
	    if(arr[i]==key)
	{
	    count++;
	}
	}
	if(count==0)
	{
	    printf("No");
	}
	else{
	    printf("Yes");
	}

}

