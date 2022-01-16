#include<stdio.h>
#include<math.h>
int main()
{
    int num,result=0,i=0;
    printf("enter the number :\n");
    scanf("%d",&num);

   while (num!=0)
   {
      int rem=num%10;
      if (rem==1)
      {
          result += pow(2,i);
      }
      i++;
      num/=10;
      
   }
   printf("answer is %d \n",result);
   
    
    return 0;
}
