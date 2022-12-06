#include<stdio.h>
#include "nestedstr.h"

int main()
{
    user u1;
    printf("enter id:\n");
    scanf("%d%*c",&u1.id);
    // fflush(stdin);
    printf("enter name:\n");
    scanf("%[^\n]%*c",&u1.name);
    printf("enter city:\n");
    scanf("%[^\n]%*c",&u1.addr.city);
    printf("enter state:\n");
    scanf("%[^\n]%*c",&u1.addr.state);
    printf("enter pincode:\n");
    scanf("%d",&u1.addr.pincode);

    FILE *fptr;
    fptr=fopen("test1.bin","ab");

    fwrite(&u1,sizeof(user),1,fptr);
    // fwrite(&u2,sizeof(user),1,fptr);
    fclose(fptr);

    FILE *fptr2=fopen("test1.bin","rb");
    user u3,u4;
    fread(&u3,sizeof(user),1,fptr2);
    // fread(&u4,sizeof(user),1,fptr2);
    fclose(fptr2);
    printf(" id: %d \n",u3.id);
    printf(" name: %s \n",u3.name);
    printf(" city: %s \n",u3.addr.city);
    printf(" state: %s \n",u3.addr.state);
    printf(" pincode: %d \n",u3.addr.pincode);

    // printf(" id: %d \n",u4.id);
    // printf(" name: %s \n",u4.name);
    // printf(" city: %s \n",u4.addr.city);
    // printf(" state: %s \n",u4.addr.state);
    // printf(" pincode: %d \n",u4.addr.pincode);
    return 0;
}