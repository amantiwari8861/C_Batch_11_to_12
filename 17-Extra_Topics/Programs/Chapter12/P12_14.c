/*P12.14 Program to understand the use of rewind()*/
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	FILE *fp;
	fp = fopen("stu","rb+");
	if(fp==NULL)
	{
		printf("Error in opening file\n");
		exit(1);
	}
	printf("Position indicator -> %ld\n",ftell(fp));
	fseek(fp, 0, 2);	
	printf("Position indicator -> %ld\n",ftell(fp));
	rewind(fp);
	printf("Position indicator -> %ld\n",ftell(fp));
	fclose(fp);
	return 0;
}