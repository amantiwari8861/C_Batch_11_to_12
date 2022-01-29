#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    fp=fopen("ReadTxtFile.txt","r"); 
    // fp=fopen("ReadTxtFile2.txt","r"); //not  found
    // fp=fopen("WritingInTxtFile1.txt","r");
    //open file in read mode and store the file pointer in fp
    //if the program file and the file to be opened are not
    // in the same directory(folder) then use the full path
    // fp=fopen("F:/Desktop/note.txt","r");
    //always use forward slash for path
    //if file is not found then it will return NULL in fp
    if(fp==NULL)
    {
        printf("File not found");
        exit(1);
    }
    while((ch=getc(fp))!=EOF) //EOF is end of file
    // while((ch=fgetc(fp))!=EOF) //EOF is end of file
    {
        printf("%c",ch);
    }
    fclose(fp);
    return 0;
}