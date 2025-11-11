//missing number

#include <stdio.h>

int main() {
   
    int n;
    printf("enter the range of elements");
    scanf("%d",&n);
     int arr[n];
    int sum=0;
    int givenarr=0;
    int h;
    
    for(int i =0;i<n;i++)
    {
        printf("enter the array element pos %d:",i);
        scanf("%d",&arr[i]);
        givenarr+=arr[i];
        sum+=i;
    }
    sum+=n;
    h=sum-givenarr;
    
    printf("the missing number is: %d",h);
    

}


//leetcode function:
int missingNumber(int* nums, int numsSize){
    int sum=0;
    int givenarr=0;
    for(int i =0;i<numsSize;i++)
    {
        givenarr+=nums[i];
        sum+=i;
    }
    sum+=numsSize;
    return sum-givenarr;
}
//time complexity : O(n)
//space complexity : O(1)