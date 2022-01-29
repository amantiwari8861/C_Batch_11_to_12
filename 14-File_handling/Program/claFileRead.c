#include<stdio.h>
#include<stdlib.h>
// int main(int argc, char const *argv[])
int main(int argc, char const **argv)
{
    FILE *fptr;
    fptr = fopen(argv[1], "r");
    if(ferror(fptr) !=0 || fptr == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }

    // ferror() takes file-pointer as input, 
    //returns nonzero integer if error detected  else returns zero

    /* if(fptr == NULL)
    {
        printf("Error! opening file");
        exit(1);
    } */
    char ch;
    while(1)
    {
        ch=fgetc(fptr);
        // if(ch==EOF)
        if(feof(fptr))
        {
            break;
        }
        printf("%c",ch);
    }
    return 0;
}
