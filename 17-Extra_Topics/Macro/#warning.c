#include<stdio.h>
#include<string.h>
int main()
{
    #warning if u choose other than modi then !  
    char vote[20];
    printf("whom u want to vote ?\n");
    scanf("%s",&vote);
    if (!strcmp(vote,"modi"))
    {
        printf("best choice \n");
    }
    else
    {
        printf("bad choice \n");        
    }  
    return 0;
}
