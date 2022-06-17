#include<stdio.h>
#include<stdlib.h>

int main(){
    int *ptr;
    ptr = (int*) malloc(10*sizeof(int));
    for(int i=0; i<10;i++){
        ptr[i] = 7*(i+1);  
        printf("The value of 7 X %d = %d \n", i+1,ptr[i]); 
    }
 
    ptr = realloc(ptr, 15*sizeof(int));
    printf("\nAfter reallocating.....\n\n");
    for(int i=0; i<15;i++){
        ptr[i] = 7*(i+1);  
        printf("The value of 7 X %d = %d \n", i+1,ptr[i]); 
    }
    
    return 0;
}