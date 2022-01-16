#include<stdio.h>
#include<math.h>
int main()
{
    int num,result=0,i=0;
    printf("enter the number :\n");
    scanf("%d",&num);

   while (num!=0)
   {
       int bit = num&1;
       result += (bit*pow(10,i));
        num=num>>1;
        i++;
   }
   printf("answer is %d \n",result);
   
    
    return 0;
}
