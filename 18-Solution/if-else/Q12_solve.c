/* 12. Write a C program to read roll no, name and marks of three subjects 
and calculate the total, percentage and division. */

#include<stdio.h>
#include<string.h>

int main()
{
    int rl,phy,chem,ca,total;
    char name[20],div[20];
    float percen;

    printf("Enter the Roll Number of the student : ");
    scanf("%d",&rl);

    printf("Enter the Name of the Student : ");
    scanf("%s",&name);

    printf("Enter the marks of Physics, Chemistry and Computer Application : ");
    scanf("%d%d%d",&phy,&chem,&ca);

    total = phy+chem+ca;
    percen = (total*100)/300.0;

    if (percen>=60)
    {
        strcpy(div,"First");
    }
    else
    {
        if ((percen<60) && (percen>=50))
        {
            strcpy(div,"Second");
        }
        else
        {
            if ((percen<50) && (percen>=38))
            {
                strcpy(div,"Pass");
            }
            else
            {
                strcpy(div,"Fail");
            }
            
        }
        
    }
    printf("Roll No : %d \n",rl);
    printf("Name of Student : %s \n",name);
    printf("Marks in Physics : %d \n",phy);
    printf("Marks in Chemistry : %d \n",chem);
    printf("Marks in Computer Application : %d \n",ca);
    printf("Total Marks = %d \n",total);
    printf("Percentage = %0.2f \n",percen);
    printf("Division = %s",div);
    
    
    return 0;
}
