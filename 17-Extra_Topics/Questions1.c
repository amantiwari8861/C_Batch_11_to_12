#include<stdio.h>
int main()
{
    int failedsub,class;
    printf("which class(division) u got ? :");
    scanf("%d",&class);
    printf("how many failed subjects ? :");
    scanf("%d",&failedsub);

    switch (class)
    {
        case 1:
                    switch (failedsub>3)
                    {
                    case 1:
                        printf("u didn't got any grace !\n");
                        break;
                    
                    default:printf("u got grace of 5 marks !\n");
                        break;
                    }
            break;
        case 2:
                    switch (failedsub>2)
                    {
                    case 1:
                        printf("u didn't got any grace !\n");
                        break;
                    
                    default:printf("u got grace of 4 marks !\n");
                        break;
                    }
            break;
        case 3:
                    switch (failedsub>1)
                    {
                    case 1:
                        printf("u didn't got any grace !\n");
                        break;
                    
                    default:printf("u got grace of 5 marks !\n");
                        break;
                    }
            break;
        default:printf("invalid class !\n");
            break;
    }
    
    return 0;
}
