<<<<<<< HEAD
#include<stdio.h>
int main()
{
    
    FILE *file1;
    file1=fopen("C:\\Users\\Aman_Tiwari\\Desktop\\aman.bin","wb");

    char arr[500];
    printf("enter the data:");
    scanf("%[^\n]s",&arr);

    fprintf(file1,"hello $%% 1234 %s",arr);

    fclose(file1);
    return 0;
}
=======
#include<stdio.h>
int main()
{
    
    FILE *file1;
    file1=fopen("aman.bin","wb");

    char arr[500];
    printf("enter the data:");
    scanf("%[^\n]s",arr);

    fprintf(file1,"hello $%% 1234 %s",arr);

    fclose(file1);
    return 0;
}
>>>>>>> eaa42a88730f025ddb6412a578957c2e832dfae6
