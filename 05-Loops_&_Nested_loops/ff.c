#include<stdio.h>
void main()
{
 int i, j;
 char A;
    for(i=1;i<=5;i++)
    {
      for(j=1;j<=i;j++)
      {
       printf("%c",'A' + j-1);
      }
      printf("\n");
    }
}