/*E11_9*/
#include<stdio.h>
struct
{
   char a[20];
   int b;
   union
   {
      double c;
	  struct
	  {
          char d[15];
		  float e;
	  }x;
   }y;
}z;
int main(void)
{
	printf("%u   %u  %u\n",sizeof(z.y.x),sizeof(z.y),sizeof(z));
	return 0;
}