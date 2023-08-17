#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,posRoot,negRoot;
    printf("enter a,b and c\n");
    scanf("%f%f%f",&a,&b,&c);

    posRoot=(-b+sqrt(b*b-4.0*a*c))/2.0*a;
    negRoot=(-b-sqrt(b*b-4.0*a*c))/2.0*a;

    printf("Positive: %f  Negative:%f \n",posRoot,negRoot); 

    if (posRoot>=0 && negRoot>=0)
    {
        printf("Real numbers\n");
    }
    else if (posRoot<0 && negRoot<0)
    {
        printf("imaginary no\n");
    }
    else
    {
        printf("complex no \n");
    }
    
    
    


    return 0;
}
