#include<stdio.h>
#include<string.h>
void removeNextLine(char string[]);

int main()
{
    char name[20],address[100],phone[14];

    printf("enter ur name :");
    fgets(name,20,stdin);
    removeNextLine(name);
    printf("enter ur address :");
    fgets(address,50,stdin);
    removeNextLine(address);
    printf("enter ur phone :");
    fgets(phone,14,stdin);
    removeNextLine(phone);

    printf("Name : %s \n",name);
    printf("Address : %s \n",address);
    printf("Phone No. : %s \n",phone);

    return 0;
}

void removeNextLine(char string[])
{
    // int len;
    // for( len=0;string[len] != '\0';len++);
    // // printf("the length of %s is %d before \n",string,len);
    // if (string[len-1]=='\n')
    // {
    //     string[len-1]='\0';
    // }
    // printf("the length of %s is %d after \n",string,strlen(string));

    if (string[strlen(string)-1]=='\n')
        string[strlen(string)-1]='\0';   

}