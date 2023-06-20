/*P11.3 Array of structures*/
#include<stdio.h>
struct student
{
    char name[20];
	int rollno;
	float marks;
};
int main(void)
{
	int i;
	struct student stuarr[10];
	for(i=0; i<10; i++)
	{
		printf("Enter name,rollno and marks : "); 
		scanf("%s%d%f",stuarr[i].name,&stuarr[i].rollno,&stuarr[i].marks);
	}
	for(i=0; i<10; i++)
		printf("%s %d %f\n",stuarr[i].name,stuarr[i].rollno,stuarr[i].marks);
	return 0;
}