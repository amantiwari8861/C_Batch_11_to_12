#include<stdio.h>

int main()
{
    int n;
    printf("Enter the size of array = ");
    scanf("%d",&n);

    int array1[n],array2[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter the %d element of array1 = ",i);
        scanf("%d",&array1[i]);

    }

    printf("All element of array1 = ");
    
    for (int i = 0; i < n; i++)
    {
        printf("%d,",array1[i]);
    }

    printf("\nThe reverse element of array1 = ");

    for (int i = 0,j=n-1; i < n,j>=0; i++,j--)
    {
        array2[i] = array1[j];
        
        printf("%d,",array2[i]);
    } 
    
    

   /*  for (int i = 0,j=2; i < 3,j>=0; i++,j--)
    {
        array2[i] = array1[j];
        
        printf("%d,",array1[i]);
        printf("%d",array2[i]);
    } */
    
    return 0;
}
