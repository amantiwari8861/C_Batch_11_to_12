/* 10. Write a C program to find the eligibility of admission for 
a professional course based on the following criteria:
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 
and Marks in Chem>=50 and Total in all three subject >=190 or 
Total in Maths and Physics >=140 */

#include<stdio.h>
int main()
{
    int marks,math,phy,chem,sum;

    printf("Enter the marks of Math = \n");
    scanf("%d",&math);

    printf("Enter the marks of Physics = \n");
    scanf("%d",&phy);

    printf("Enter the marks of Chemistry = \n");
    scanf("%d",&chem);

    if (math>=65 && phy>=55 && chem>=50)
    {
        sum = math+phy+chem;
        printf("Total marks of all subjects = %d\n",sum);
        printf("The candidate is eligible for admission.");
        
    }
    else
    {
        sum = math+phy+chem;
        printf("Total marks of all subjects = %d\n",sum);
        printf("The candidate is not eligible for admission.");
    }
    
    

    return 0;
}
