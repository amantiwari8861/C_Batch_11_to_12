#include<stdio.h>
#include<string.h>
struct Student //blueprint
{
    int rollno;
    char name[30];
    char gender;
    float percentage;
}s6={6,"Shubhankar",'M',99.6};
int main()
{
    //Array: Homogeneous collection of data
    //100 students -> rollno,name,scienceMarks.....
    
    //Structure : heterogeneous collection of data

    struct Student s1,s2,s3,s4={3,"Richa pandey",'F',92.5};

    s1.rollno=1;
    s1.gender='F';
    s1.percentage=98.6;
    // s1.name="Khushi";
    // s1.name={"Khushi"};
    strcpy(s1.name,"khushi");

    printf("Roll No. :%d \n",s1.rollno);
    printf("Name :%s \n",s1.name);
    printf("Gender :%c \n",s1.gender);
    printf("Percentage :%f \n",s1.percentage);

    printf("------------------------------------------\n");
    // s2={2,"Mohit Bisht",'M',96.5};//error bcz we can't initialize object after declaration 
    // struct Student s5={2,"Mohit Bisht",'M',96.5};
    // printf("Roll No. :%d \n",s5.rollno);
    // printf("Name :%s \n",s5.name);
    // printf("Gender :%c \n",s5.gender);
    // printf("Percentage :%f \n",s5.percentage);

    

    return 0;
}
