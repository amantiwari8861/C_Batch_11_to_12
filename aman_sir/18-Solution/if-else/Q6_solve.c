/* 6. Write a C program to read the value of an integer m and display
 the value of n is 1 when m is larger than 0, 0 when m is 0 and -1 when
 m is less than 0. */

 #include<stdio.h>

 int main()
 {
     int num,m;
     printf("Enter any number = ");
     scanf("%d",&num);

     if (num==0)
     {
        m=0;
        printf("The value of n = %d",m);
     }
     else
     {
        if (num>0)
        {
           m=1;
           printf("The value of n = %d",m);
        }
        else
        {
            m=-1;
            printf("The value of n = %d",m);
        }
        
     }
      return 0;
 }
 