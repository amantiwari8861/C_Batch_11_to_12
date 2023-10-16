#include<stdio.h>
#include<string.h>
int main()
{
    // char fname[20];
    // printf("Enter ur first name:");
    // scanf("%[^\n]s",fname);

    // fflush(stdin);
    // printf("the name is %s \n",fname);
    // int len=strlen(fname);
    // printf("the length of first name is %d \n",len);
    // printf("the length of first name is %d \n",strlen(fname));
    
    // strcat(fname," Tiwari");
    // printf(" %s \n",fname);
    // printf(" strlwr -> %s \n",strlwr(fname));
    // printf(" strupr -> %s \n",strupr(fname));
    // printf(" strrev -> %s \n",strrev(fname));

    // char name2[20];
    // printf("enter second name:");
    // scanf("%[^\n]s",name2);

    // printf("name 1 is :%s \n",fname);
    // printf("name 2 is :%s \n",name2);

    // if(strcmp(fname,name2)==0) //A A 65-65 =0
    // {
    //     printf("both names are same \n");
    // }
    // else if (strcmp(fname,name2)==-1) //A- 65 a-97 65-97 => -32 => -1
    // {
    //     printf("first string is less than second string in ASCII\n");
    // }
    // else if (strcmp(fname,name2)==1) //a 97 A 65 97-65 => 32 => 1
    // {
    //     printf("first string is greater than second string in ASCII\n");
    // }
    
    char username[20],password[20];
    printf("enter username:");
    scanf("%[^\n]s",username);
    fflush(stdin);
    printf("enter password:");
    scanf("%[^\n]s",password);

    if (strcmp(username,"Aman")==0 && strcmp(password,"1234")==0)
    {
        printf("Login succesfull!! welcome %s \n",username);
    }
    else
    {
        printf("Login unsuccesfull!! try again ...\n");
    } 

    return 0;
}
