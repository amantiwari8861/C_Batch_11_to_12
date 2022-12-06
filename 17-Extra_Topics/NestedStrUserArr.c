#include <stdio.h>
#include "nestedstr.h"
int main()
{
    int size;
    printf("enter the no. of students : ");
    scanf("%d", &size); // let no. of students =3
    user userArr[size];
    FILE *fptr = fopen("test3.bin", "ab");
    for (int i = 0; i < size; i++)
    {
        printf("\n----------------------------\n");
        printf("enter id:\n");
        scanf("%d%*c", &userArr[i].id);
        printf("enter name:\n");
        scanf("%[^\n]%*c", &userArr[i].name);
        printf("enter city:\n");
        scanf("%[^\n]%*c", &userArr[i].addr.city);
        printf("enter state:\n");
        scanf("%[^\n]%*c", &userArr[i].addr.state);
        printf("enter pincode:\n");
        scanf("%d", &userArr[i].addr.pincode);
        // fwrite(&userArr[i], sizeof(user), 1, fptr);
        printf("\n----------------------------\n");
    }
    fwrite(&userArr, sizeof(user), size, fptr);
    fclose(fptr);
    printf("User's data are :\n");
    user temp;
    FILE *fptr2 = fopen("test3.bin", "rb");
    user userarr2[size];
    fread(&userarr2, sizeof(user),size, fptr2);
    // while (fread(&temp, sizeof(user), 1, fptr2))
    // {
    //     printf("\n----------------------------\n");
    //     printf(" id: %d \n", temp.id);
    //     printf(" name: %s \n", temp.name);
    //     printf(" city: %s \n", temp.addr.city);
    //     printf(" state: %s \n", temp.addr.state);
    //     printf(" pincode: %d \n", temp.addr.pincode);
    //     printf("\n----------------------------\n");
    // }
    for (int i = 0; i < size; i++)
    {        
        printf("------------------------------------------\n");
        printf("the id is %d and name is %s\n",userarr2[i].id,userarr2[i].name);
        printf("city %s state %s pincode %d\n",userarr2[i].addr.city,userarr2[i].addr.state,userarr2[i].addr.pincode);
    }
    fclose(fptr2);

    return 0;
}
