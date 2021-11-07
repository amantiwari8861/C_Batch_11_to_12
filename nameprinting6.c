#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	char name[10],name2[20];
	printf("enter the name\n");
	gets(name);
	fflush(stdin);
	gets(name2);
	fflush(stdin);
	// printf("length 1:%d\n",strlen(name));
	// printf("length 2:%d\n",strlen(name2));
	// printf("copy :%s\n",strcpy(name,name2));
	// printf(" the name is %c \n",name[8]);
	// printf("concatenate:%s\n",strcat(name,name2));
	printf("comparing:%d\n",strcmp(name,name2));
	// printf("lowercase:%s\n",strlwr(name));
	// printf("uppercase:%s\n",strupr(name));
	// printf("reverse:%s\n",strrev(name));
	return 0;
}
/*#include<stdio.h>
 
int main() {
    // declare a variable to store the name
    char *name = (char *) malloc(100);
    
    // read the name from input
    scanf("%s", name);
    
    // print the name 
    printf("Hello %s", name);
}
*/




