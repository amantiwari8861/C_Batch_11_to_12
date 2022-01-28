#include<stdio.h>
struct address
{
    int pincode;
    char city[20];
};
struct Student
{
    int stid;
    char stname[30];
    struct address addr;
};
int main()
{
    struct Student st[3],*sptr;
    sptr=&st[0];
    printf("enter the student name \n");
    scanf("%[^\n]s",&st[0].stname);
    
    printf("enter the pincode ");
    scanf("%d",&st[0].addr.pincode);
    
    //printf("the name and pincode is %s   %d \n",st[0].stname,st[0].addr.pincode);
    printf("the name and pincode is %s   %d \n",sptr->stname,sptr->addr.pincode);
    return 0;
}