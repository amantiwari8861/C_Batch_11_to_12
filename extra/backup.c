#include<stdio.h>
#include<math.h>
// int cube(int);//declaration of function
int cube(int num)   //body
{
    // printf("hii i am cubing %d \n",num);
    return num*num*num;
}
float volOfSphere(float r)
{
    return 4.0/3.0*3.14*r*r*r;
}
int main()
{
    // printf("main is running...\n");
    // int result=cube(5);
    // printf("the result is %d \n",result);

    // printf(" %d \n",cube(2));
    // printf(" %d \n",cube(4));
    // printf(" %d \n",cube(5));
    // printf(" %d \n",cube(7));
    // printf(" %d \n",cube(8));
    // printf(" %d \n",cube(9));

    printf(" %f \n",volOfSphere(2.5));


    return 0;
}


//functions : set of statements (codes)
// 1.modularity
// 2.reusability
// 3. decrease complexity
//  4. increase readibility