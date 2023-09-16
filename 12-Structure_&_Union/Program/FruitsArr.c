#include<stdio.h>
typedef struct  
{
    char name[30];
    float weight;
    double price;
    char isEatable;
}Fruits;

int main()
{
    Fruits fruitsList[10];  

    for (int i = 0; i < 3; i++)
    {
        printf("\n\t\t Enter %d fruit details \n",i+1);
        fflush(stdin);
        printf("enter fruit name:");
        scanf("%[^\n]s",&fruitsList[i].name);
        printf("enter fruit weight:");
        scanf("%f",&fruitsList[i].weight);
        printf("enter fruit price:");
        scanf("%lf",&fruitsList[i].price);
        fflush(stdin);
        printf("is fruit eatable:");
        scanf("%c",&fruitsList[i].isEatable);
    }
    printf("\n\t\t All Fruits List \n");
    for (int i = 0; i < 3; i++)
    {
        printf("============= Fruit %d Details =================\n",i+1);
        printf("fruit name: %s \n",fruitsList[i].name);
        printf("fruit price: %0.2lf \n",fruitsList[i].price);
        printf("fruit weight: %0.2f \n",fruitsList[i].weight);
        printf("fruit is eatable: %c \n\n",fruitsList[i].isEatable);
    }
    

    return 0;
}
