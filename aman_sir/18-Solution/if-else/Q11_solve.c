/* 11. Write a C program to calculate the root of a Quadratic Equation. */

 #include<stdio.h>
 #include<math.h>

 int main()
 {
     int a,b,c;
     float r1,r2,d;

     printf("Enter the value of a,b and c = ");
     scanf("%d%d%d",&a,&b,&c);
     
     printf("The Quadratic Equation =%dx^2+%dx+%d=0 \n",a,b,c);

     d = (b*b-4.0*a*c);

     if (d<0)
     {
        
        printf("Roots are imaginary and unequal.\n");
     }
     else
     {
         if (d==0)
         {
            printf("Roots are real and equal.\n");
            r1 = -b/(2.0*a);
            printf("Roots is = %f",r1);
         }
         else
         {
             if (d>0)
             {
                printf("Roots are real and distinct.\n");
                r1 = (-b + sqrt(d))/(2.0*a);
                r2 = (-b - sqrt(d))/(2.0*a);
                printf("Root1 = %f and Root2 = %f",r1,r2);
             }
         }
     }
     
     return 0;
 }
 