/*P11.2 Program to assign a structure variable to another structure variable*/
struct student
{
    char name[20];
	int rollno;
	float marks;
};
int main(void)
{
	struct student stu1={"Oliver",12,98};
	struct student stu2;
	stu2 = stu1;
	printf("stu1:%s  %d  %.2f\n",stu1.name,stu1.rollno,stu1.marks);
	printf("stu2:%s  %d  %.2f\n",stu2.name,stu2.rollno,stu2.marks);
	return 0;
}
