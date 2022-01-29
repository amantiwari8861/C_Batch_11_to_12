#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fileName;
    char charr[1000];
    fileName = fopen("ReadTxtFile.txt","r");
    if(fileName == NULL)
    {
        printf("File does not exist");
        exit(0);
    }
	fgets(charr,1000,fileName);
    // it will read only first line of the file
    printf(" the string is :  %s\n",charr);
	fclose(fileName);
	return 0;
}