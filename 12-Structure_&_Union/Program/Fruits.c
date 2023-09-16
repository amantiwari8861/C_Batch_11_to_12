#include<stdio.h>
#include<string.h>
//blueprint 
struct Fruits 
{
    char name[30];
    float weight;
    double price;
    char isEatable;
};
// }f1={"mango",0.2,150.5,'Y'};

int main()
{
    //Array ?
    //structure is an user-defined data type

    // int a=10;
    // struct Fruits f1={"mango",0.2,150.5,'Y'};

    // printf("fruit name: %s \n",f1.name);
    // printf("fruit price: %0.2lf \n",f1.price);
    // printf("fruit weight: %0.2lf \n",f1.weight);
    // printf("fruit is eatable: %c \n",f1.isEatable);

    struct Fruits f2;
    // f2.price=25.5;
    // f2.weight=78;
    // f2.isEatable='Y';
    // // f2.name="Apple";
    // strcpy(f2.name,"Apple");
    printf("enter fruit name:");
    scanf("%[^\n]s",&f2.name);
    printf("enter fruit weight:");
    scanf("%f",&f2.weight);
    printf("enter fruit price:");
    scanf("%lf",&f2.price);
    fflush(stdin);
    printf("is fruit eatable:");
    scanf("%c",&f2.isEatable);

    printf("fruit name: %s \n",f2.name);
    printf("fruit price: %0.2lf \n",f2.price);
    printf("fruit weight: %0.2f \n",f2.weight);
    printf("fruit is eatable: %c \n",f2.isEatable);



    return 0;
}
