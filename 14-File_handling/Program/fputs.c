#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("WriteTxtFile.txt", "w");
    char ch[] = {"this data will be written in file \n"};
    fputs(ch, fp);
    fclose(fp);
    return 0;
}