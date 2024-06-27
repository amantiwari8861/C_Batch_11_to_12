#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// structure -> blueprint
struct Student
{
    int rollNo;
    char name[20];
    float fee;
    char gender;
} stu3;
int main()
{
    // int arr[10];//array is static it can't grow or shrink at runtime

    // int num=50;
    // int *ptr=NULL;
    // ptr=&num;

    // printf("the address of num is %d \n",&num);
    // printf("the value of ptr is %d \n",ptr);
    // printf("the value at address ptr is %d \n",*ptr);
    // *ptr=99;
    // printf("the value of num is %d \n",num);
    // printf("the value at address ptr is %d \n",*ptr);

    // int arr[]={10,20,30};
    // int *ptr=arr;

    // printf(" %d \n",ptr[0]);
    // printf(" %d \n",ptr[1]);
    // printf(" %d \n",ptr[2]);

    // int arr[]={10,20,30};
    // int *ptr=&arr[0];
    // printf(" %d \n",ptr[0]);
    // printf(" %d \n",ptr[1]);
    // printf(" %d \n",ptr[2]);
    // printf(" %d \n",*ptr);
    // ptr++;
    // printf(" %d \n",*ptr);
    // ptr++;
    // printf(" %d \n",*ptr);

    // int *arr;
    // arr=(int*)malloc(3*sizeof(int));//dynamically allocate the memory
    // arr=(int*)calloc(3,sizeof(int));//dynamically allocate the memory

    // malloc is much faster than calloc
    //  *(arr+0)=10;
    //  *(arr+1)=20;
    //  *(arr+2)=30;

    // printf("arr[0]=%d \n",*(arr));
    // printf("arr[1]=%d \n",*(arr+1));
    // printf("arr[2]=%d \n",*(arr+2));

    // arr=(int*)realloc(arr,5*sizeof(int));
    // *(arr+3)=56;
    // *(arr+4)=99;

    // printf("arr[0]=%d \n",*(arr));
    // printf("arr[1]=%d \n",*(arr+1));
    // printf("arr[2]=%d \n",*(arr+2));
    // printf("arr[3]=%d \n",*(arr+3));
    // printf("arr[4]=%d \n",*(arr+4));

    // free(arr); //deallocate the memory
    // printf("arr[0]=%d \n",*(arr));
    // printf("arr[1]=%d \n",*(arr+1));
    // printf("arr[2]=%d \n",*(arr+2));

    // int num=10;
    // structure is an user-defined data type
    // struct Student stu={1,"Aman tiwari",2.47,'M'};
    // printf(" rollno = %d \n",stu.rollNo);
    // printf(" name = %s \n",stu.name);
    // printf(" fee = %f \n",stu.fee);
    // printf(" gender = %c \n",stu.gender);

    // struct Student stu2={2,"Sparsh sharma",2.47,'M'};
    // stu2.rollNo=99;
    // printf(" rollno = %d \n",stu2.rollNo);
    // printf(" name = %s \n",stu2.name);
    // printf(" fee = %f \n",stu2.fee);
    // printf(" gender = %c \n",stu2.gender);

    // struct Student *stuPtr;
    // stuPtr=&stu2;

    // printf(" rollno = %d \n",stuPtr->rollNo);
    // printf(" name = %s \n",stuPtr->name);
    // printf(" fee = %f \n",stuPtr->fee);
    // printf(" gender = %c \n",stuPtr->gender);

    // struct Student stuArr[100];

    // struct Student *newStudent=(struct Student*)malloc(sizeof(struct Student));
    // newStudent->rollNo=100;
    // // newStudent->name="Aman Tiwari";//error
    // strcpy(newStudent->name,"Aman Tiwari");
    // newStudent->fee=2.47;
    // newStudent->gender='M';

    // // free(newStudent);
    // // printf(" rollno = %d \n",newStudent->rollNo);
    // // printf(" name = %s \n",newStudent->name);
    // // printf(" fee = %f \n",newStudent->fee);
    // // printf(" gender = %c \n",newStudent->gender);

    // struct Student *newStudent2=(struct Student*)malloc(sizeof(struct Student));
    // newStudent2->rollNo=101;
    // strcpy(newStudent2->name,"Sparsh Sharma");
    // newStudent2->fee=2.47;
    // newStudent2->gender='M';

    struct Student *stuArr;
    stuArr = (struct Student *)malloc(3 * sizeof(struct Student));
    // *(stuArr)=*newStudent;
    // *(stuArr+1)=*newStudent2;

    // printf(" rollno = %d \n",(stuArr+0)->rollNo);
    // printf(" name = %s \n",(stuArr+0)->name);
    // printf(" fee = %f \n",(stuArr+0)->fee);
    // printf(" gender = %c \n",(stuArr+0)->gender);

    // printf(" rollno = %d \n",(stuArr+1)->rollNo);
    // printf(" name = %s \n",(stuArr+1)->name);
    // printf(" fee = %f \n",(stuArr+1)->fee);
    // printf(" gender = %c \n",(stuArr+1)->gender);

    if (stuArr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1; // Exit the program with an error code
    }

    // Add data to the first object
    stuArr[0].rollNo = 1;
    snprintf(stuArr[0].name, sizeof(stuArr[0].name), "John");
    stuArr[0].fee = 1000.50;
    stuArr[0].gender = 'M';

    // Add data to the second object
    stuArr[1].rollNo = 2;
    snprintf(stuArr[1].name, sizeof(stuArr[1].name), "Alice");
    stuArr[1].fee = 1500.75;
    stuArr[1].gender = 'F';

    // Print the objects stored in the array
    printf("Student 1: Roll No: %d, Name: %s, Fee: %.2f, Gender: %c\n", stuArr[0].rollNo, stuArr[0].name, stuArr[0].fee, stuArr[0].gender);
    printf("Student 2: Roll No: %d, Name: %s, Fee: %.2f, Gender: %c\n", stuArr[1].rollNo, stuArr[1].name, stuArr[1].fee, stuArr[1].gender);

    return 0;
}
