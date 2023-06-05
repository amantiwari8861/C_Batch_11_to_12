#include<stdio.h>
int main()
{
    // 1/R=1/R1+1/R2+1/R3+1/R4+1/R5+1/R6+1/R7+1/R8+1/R9+1/Rn;
    float Resistance[4],R=0;
    printf("Enter the resistance values:\n");
    for(int i=0;i<4;i++)
    {
        printf("R%d:   ",i+1);
        scanf("%f",&Resistance[i]);
    }
    for(int i=0;i<4;i++)
    {
        R=R+1/Resistance[i];
    }
    printf("The total resistance is %f",1/R);
    return 0;
}
