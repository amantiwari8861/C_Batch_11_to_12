#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    fp=fopen("ReadTxtFile.txt","r");
    if(fp==NULL)
    {
        printf("File does not exist");
        exit(0);
    }
    int i=0,sum=0;

    //if we used %d then we have to store the value only in integer
    //this means no other value will be stored
   while(fscanf(fp,"%d",&i)!=EOF)
    { 
      sum=sum+i; 
      printf("text file: i=%d\n",i);
    }

  printf("text sum=%d\n",sum);
    return 0;
}
