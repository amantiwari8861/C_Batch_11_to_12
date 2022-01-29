#include<stdio.h>

int main()
{
    FILE *fp;
    char ch='a';
    // fp=fopen("WritingInTxtFile1.txt","w");
    fp=fopen("WritingInTxtFile1.txt","a"); //append mode
    //open file in write mode and store the file pointer in fp
    //if the file to be write is not in the directory the it will create the file
    //if the file is already present then it will overwrite the file

    //here EOF is used because if user gives CTRL+Z
    //then it will terminate the loop
    while((ch=getchar())!=EOF)
    {
        // fputc(ch,fp);
        putc(ch,fp);
    }
    fclose(fp);
    //putc is nearly identical to fputc, except that putc is allowed to be a macro.
    //I haven't encountered putc in much code
    return 0;
}
