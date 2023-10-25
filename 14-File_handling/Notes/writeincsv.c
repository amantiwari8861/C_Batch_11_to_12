#include<stdio.h>
#include <string.h>
int main()
{

    FILE *myFile=fopen("C:\\Users\\admin\\Desktop\\Data.csv","r");
    if (myFile==NULL)
    {
        printf("file doesn't exist creating file....\n");
        myFile=fopen("C:\\Users\\admin\\Desktop\\Data.csv","a");
        fprintf(myFile,"%s","Roll No. ,Name,Address\n");
        fclose(myFile);
    }
    myFile=fopen("C:\\Users\\admin\\Desktop\\Data.csv","a");
    int rollno;
    char name[30],address[50];
    printf("enter rollNo :");
    scanf("%d",&rollno);
    fflush(stdin);
    printf("enter Name :");
    scanf("%[^\n]s",name);
    fflush(stdin);
    printf("enter Address :");
    scanf("%[^\n]s",address);
    
    fprintf(myFile,"%d,%s,%s\n",rollno,name,address);
    fclose(myFile);

    return 0;
}
