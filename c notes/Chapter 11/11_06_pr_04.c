#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int*) malloc(5*sizeof(int));
    for(int i=0; i<5;i++){
        printf("Enter the value of %d element: \n", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<5;i++){
        printf("The value of %d element is: %d \n", i, ptr[i]); 
    }

    ptr = realloc(ptr, 10*sizeof(int));
    for(int i=0; i<10;i++){
        printf("Enter the value of %d element: \n", i);
        scanf("%d", &ptr[i]);
    }

    for(int i=0; i<10;i++){
        printf("The value of %d element is: %d \n", i, ptr[i]); 
    }
    return 0;
}