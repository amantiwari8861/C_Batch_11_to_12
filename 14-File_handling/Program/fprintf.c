#include<stdio.h>
int main()
{
    FILE *fp;
    fp=fopen("WriteInTxtFile.txt","w");

    char sentence[100];
    printf("Enter a sentence: ");
    scanf("%[^\n]s",&sentence);

    // printf("The sentence entered is: %s\n", sentence); 
    fprintf(fp,"The sentence entered is: %s\n", sentence);
    fclose(fp);
    return 0;
}