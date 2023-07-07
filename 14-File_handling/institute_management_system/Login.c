#include "Admin.h"

void checkIfItIsFirstTime()
{
    FILE *f;
    f=fopen("Admin.dat","r");

    if (f==NULL)
    {
        printf("Welcome to our Program 1st Time \n");
        FILE *f2;
        f2=fopen("Admin.dat","wb");

        Admin a;
        printf("enter username :");
        scanf("%[^\n]s",&a.username);
        fflush(stdin);
        printf("enter password :");
        scanf("%[^\n]s",&a.password);
        fflush(stdin);

        int status=fwrite(&a,sizeof(Admin),1,f2);
        if (status==1)
        {
            printf("Admin Succesfully registered!!\n");
        }
        else
        {
            printf("unable to register Admin!!\n");
        }
        
        
        fclose(f2);
    }
    fclose(f);
}

void validateAdmin(Admin admin)
{
   FILE *f;
    f=fopen("Admin.dat","rb");
    Admin temp2;
    fread(&temp2,sizeof(Admin),1,f);
    fclose(f);
    if (!strcmp(admin.username,temp2.username) && !strcmp(admin.password,temp2.password) )
    {
        printf("Login succesfully!!");
    }
    else
    {
        printf("invalid username or password!!");
        
        exit(0);
    }
}