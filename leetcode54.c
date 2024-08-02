/*
54. Spiral Matrix
Solved
Medium
Topics
Companies
Hint
Given an m x n matrix, return all elements of the matrix in spiral order.

 

Example 1:


Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5]
Example 2:


Input: matrix = [[1,2,3,4],[5,6,7,8],[9,10,11,12]]
Output: [1,2,3,4,8,12,11,10,9,5,6,7]
 

Constraints:

m == matrix.length
n == matrix[i].length
1 <= m, n <= 10
-100 <= matrix[i][j] <= 100
Seen this question in a real interview before?
1/5
Yes
No
Accepted
1.5M
Submissions
3M
Acceptance Rate
50.5%
Topics
Companies
Hint 1
Hint 2
Hint 3
Similar Questions
Discussion (135)

Choose a type



Copyright ©️ 2024 LeetCode All rights reserved*/
// my solution using for loop
#include <stdio.h>

int main()
{
  int row,col;
  printf("Enter the number of rows and columns");
  scanf("%d %d",&row,&col);
  int mat[row][col];
    int l=row*col;
  int arr[l];
  int k=0;
  int n=row;
  for(int i=0;i<row;i++)
  {
      for(int j=0;j<col;j++)
      {
          scanf("%d",&mat[i][j]);
          arr[k]=mat[i][j];
          k++;
      }
  }
  for(int i=0;i<l;i++)
  {
      printf("%d",arr[i]);
    
  }
  printf("\n");
  int brr[l];
  int s=0;
  for(int i=0;i<row;i++)
  {
      brr[s]=arr[i];
      s++;
  }
  brr[s++]=arr[n*2-1];
  int p=(row*col)-1;
  int h=n*2;
  for(int i=p;i>=h;i--)
  {
      brr[s]=arr[i];
      s++;
  }
  
  for(int i=n;i<n*2-1;i++)
  {
      brr[s]=arr[i];
      s++;
  }
    for(int i=0;i<s;i++)
  {
      printf("%d ",brr[i]);
    
  }

  

    return 0;
}
// most used solution
/*

int* spiralOrder(int** matrix, int matrixSize, int* matrixColSize, int* returnSize) {
    
    if (matrixSize == 0 || *matrixColSize == 0) {
        *returnSize = 0;
        return NULL;
    }

    int row = matrixSize;
    int col = *matrixColSize;
    int totalElements = row * col;
    int* result = (int*)malloc(totalElements * sizeof(int));
    int idx = 0;

    int top = 0, bottom = row - 1;
    int left = 0, right = col - 1;

    while (top <= bottom && left <= right) {
        
        for (int i = left; i <= right; i++) {
            result[idx++] = matrix[top][i];
        }
        top++;

        
        for (int i = top; i <= bottom; i++) {
            result[idx++] = matrix[i][right];
        }
        right--;

        if (top <= bottom) {
            
            for (int i = right; i >= left; i--) {
                result[idx++] = matrix[bottom][i];
            }
            bottom--;
        }

        if (left <= right) {
           
            for (int i = bottom; i >= top; i--) {
                result[idx++] = matrix[i][left];
            }
            left++;
        }
    }

    *returnSize = idx;
    return result;
}*/