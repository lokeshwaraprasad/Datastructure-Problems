/*
66. Plus One
Solved
Easy
Topics
Companies
You are given a large integer represented as an integer array digits, where each digits[i] is the ith digit of the integer. The digits are ordered from most significant to least significant in left-to-right order. The large integer does not contain any leading 0's.

Increment the large integer by one and return the resulting array of digits.

 

Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Incrementing by one gives 123 + 1 = 124.
Thus, the result should be [1,2,4].
Example 2:

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Incrementing by one gives 4321 + 1 = 4322.
Thus, the result should be [4,3,2,2].
Example 3:

Input: digits = [9]
Output: [1,0]
Explanation: The array represents the integer 9.
Incrementing by one gives 9 + 1 = 10.
Thus, the result should be [1,0].
 

Constraints:

1 <= digits.length <= 100
0 <= digits[i] <= 9
digits does not contain any leading 0's.*/

//my code:

/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<math.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        
    }
    int k=0;
    
    int sum=0;
    for(int i=n-1;i>=0;i--)
    {
        int h=pow(10,k);
        sum+=arr[i]*h;
        k++;
    }
    
    int kol=sum+1;
    printf("%d",kol);
    int brr[10];
    int o=0;
    
   while(kol>0)
   
   {
       brr[o]=kol%10;
       kol/=10;
       o++;
       
   }
   printf("\n");
   
   
   for(int i=0;i<o;i++)
   {
       printf("%d",brr[i]);
   }
    
    
    for(int i=0;i<o/2;i++)
    {
        int temp=brr[i];
        brr[i]=brr[o-i-1];
        brr[o-i-1]=temp;
    }
    
    printf("\n");
   
   
   for(int i=0;i<o;i++)
   {
       printf("%d",brr[i]);
   }
    
}


//function for lewtcode:

#include <stdio.h>
#include <stdlib.h>

int* plusOne(int* digits, int digitsSize, int* returnSize) {
    
    int* result = (int*)malloc(sizeof(int) * (digitsSize + 1));
    
    int carry = 1;  
    for (int i = digitsSize - 1; i >= 0; i--) {
        int sum = digits[i] + carry;
        result[i + 1] = sum % 10;
        carry = sum / 10;
    }

    if (carry) {
        result[0] = carry;
        *returnSize = digitsSize + 1;
        return result; 
    } else {
        *returnSize = digitsSize;
        return result + 1; 
    }
}
