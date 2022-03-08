#include<stdio.h>
#include<math.h>
int main()
{
    //compound Interest: P(1+r/n)^nt here r is the rate of interest and n is the number of times the interest is compounded per year.

    float principal, rate, time, n,compoundInterest;
    printf("Enter the principal amount: ");
    scanf("%f", &principal);
    printf("Enter the rate of interest: ");
    scanf("%f", &rate);
    printf("Enter the number of times the interest is compounded per year: ");
    scanf("%f", &n);
    printf("Enter the time in years: ");
    scanf("%f", &time);

    compoundInterest = principal * pow(1 + (rate / n), n * time);

    printf("The compound interest is: %f", compoundInterest);

    return 0;
}
