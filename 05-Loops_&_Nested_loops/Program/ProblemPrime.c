#include<stdio.h>
int main()
{
    int num,temp=0;
   printf("enter the no. \n");
   scanf("%d",&num);

   for (int i = 2; i < num; i++)
   {
        if (num%i==0)
        {
            printf("%d/%d is not prime \n",num,i);
            break;
        }
        else
        {
            printf("%d/%d is  prime\n",num,i);
        }
        
    }
   
    return 0;
}
