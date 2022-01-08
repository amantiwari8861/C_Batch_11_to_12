#include<stdio.h>
int main()
{
    FILE *fileName;
    char ch[1000];
    fileName = fopen("C:/Users/Aman_Tiwari/Desktop/program.txt","r");
	fgets(ch,1000,fileName);

    printf("%s\n",ch);
	fclose(fileName);
	return 0;
}