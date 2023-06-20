/*E14.45*/
#include<stdio.h>
void displayBits(int x);
int pack(int empid, int jobid, char jstatus, char gender, int age, char mstatus);
int main(void)
{
	int emp;
	int empid,jobid,age,mstatus; 
	char gender,jstatus;
	emp=pack(2048,80,'P','F',50,3);
	displayBits(emp);
	/*Unpack*/
	empid = emp & 0xFFF;
	jobid = (emp & 0x7F000)>>12;
	jstatus = (emp & 0x80000)>>19;
	gender = (emp & 0x100000)>>20;
	age =  (emp & 0xFE00000)>>21;
	mstatus = (emp & 0x30000000)>>28;
	printf("%d\n%d\n%d\n%d\n%d\n%d\n",empid,jobid,jstatus,gender,age,mstatus);
	return 0;
}
int pack(int empid, int jobid, char jstatus, char gender, int age, char mstatus)
{
	int emp=0;
	emp = emp | empid;
	emp = emp | jobid<<12;
	emp = emp | (jstatus == 'T' ? 0 : 1)<<19;
	emp = emp | (gender == 'F' ? 0 : 1)<<20;
	emp = emp | age<<21;
	emp = emp | mstatus<<28;
	return emp;
}
void displayBits(int x)
{
	int i,mask;
	for(i=31; i>=0; i--)
	{
		mask = 1<<i;
		putchar((x & mask)?'1':'0'); /* Test and print ith bit*/		
		if(i%8==0)
			putchar(' '); /*Space after 8 bits*/
	}
	printf("\n");
}