#include "Admin.h"
#include "Login.c"

int main()
{
    checkIfItIsFirstTime();
        Admin a2;
        printf("enter username :");
        scanf("%[^\n]s",&a2.username);
        fflush(stdin);
        printf("enter password :");
        scanf("%[^\n]s",&a2.password);
        fflush(stdin);

        validateAdmin(a2);
        printf("after login!!");

    return 0;
}
