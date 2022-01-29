#include<stdio.h>
//command line arguments
int main(int argc,char *argv[])
{
    printf("the no. of characters is %d \n",argc);
    
    for(int i=0;i<argc;i++)
    {
        printf("the value given at %d position is %s \n",i,argv[i]);
    }
    //argc = total no. of arguments 
    //argv = total arguments passed Array (this is two dimensional array using pointers)
    //argv[0] = this is program name  

    return 0;
}