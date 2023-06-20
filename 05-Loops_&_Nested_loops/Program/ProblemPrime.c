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
            // printf("%d/%d perfectly kat gaya \n",num,i);
            printf("%d is not prime \n",num);
            break;
        }
        // else
        // {
        //     // printf("%d/%d perfectly nahi kta \n",num,i);
        //     printf("%d is prime \n",num);
        // }
    }
   
    return 0;
}
