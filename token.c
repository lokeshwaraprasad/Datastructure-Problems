//printing tokens in c #hackerearth
//printing the words in next line after space
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
      char s[1000];
    scanf("%[^\n]", s);
    for(int i=0;s[i];i++)
    {
        if(s[i]==' ')
          printf("\n");
        else {
          printf("%c",s[i]);
        }
    }
}