#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fptr;
    char line[1000];
    fptr = fopen("ReadTxtFile.txt", "r");
    if(fptr == NULL)
    {
        printf("Error! opening file");
        exit(1);
    }
    while (fgets(line, 1000, fptr) != NULL)
    {
        printf("Read line %s :\n", line);
    }
    return 0;
}