#include<stdio.h> 
int main()
{
FILE *fp;
fp = fopen("C:/Users/Aman_Tiwari/Desktop/program.txt","w");
char ch[]={"This is a sample text file.\n"};
char ch2[]={"This file contains some sample text data.\n"};
fputs(ch, fp);
fputs(ch2, fp);

fclose(fp);
return 0; 
}