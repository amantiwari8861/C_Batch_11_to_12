#include<stdio.h>
#include<math.h>
void myFunction();
int main()
{
    printf("before calling in main \n");
    myFunction();
    float res=pow(2,7);
    printf("result =%f \n",res);;
    printf("after calling in main \n");
    return 0;
}
void myFunction()
{
    printf("hii i am myFunction\n");
}