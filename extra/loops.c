#include<stdio.h>
int main()
{
    
    // loops : 
    //1. for
    //2. while
    //3. do-while

    // for loop syntax:
    /*
        for(initialization ; condition ; increment / decrement)
        {
            //code
        }
        int num; //declaration of variable
        num=10; //initialization

        num++;  //increment num =11
        num--;  //decrement num =10
    */

//    for ( ; ; ) //infinite for loop
//    {
//         printf("hello \n");
//    }

   int a;
   for(a=1; a<=10 ;a++)
   {
        printf(" hello Aman %d \n",a);
   }

    /*  psuedocode (Dry run)

    step 1: a=1
            1<=10 true
            code run..
    step 2:a=2
        2<=10  t
        code run..

        ..

    step 10 : a=10
                10<=10 t
                code run..

    step 11:  a=11
                11<=10 false 
                loop terminate.
    */

//    int times;
//    printf(" enter no. of times :");
//    scanf("%d",&times); //10


//    int j;
//    for ( j = 1; j <= times; j++)
//    {
//         printf(" j = %d \n",j);
//    }
//    int i;
//    for (i = times; i >0 ; i--)
//    {
//         printf(" i = %d \n",i);
//    }
   
    return 0;
}
