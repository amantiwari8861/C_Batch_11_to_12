#include<stdio.h>
#include<string.h>
int main()
{
	char name[10],name2[20];
	printf("enter the name\n");
	gets(name);
	fflush(stdin);
	gets(name2);
	fflush(stdin);
	// printf("length 1:%d\n",strlen(name));
	// printf("length 2:%d\n",strlen(name2));
	// printf("length 2 by size of:%d\n",sizeof(name2));
	// strcpy(name,name2);
	// printf("copy :%s\n",name);
	// printf("concatenate:%s\n",strcat(name,name2));
	// printf("lowercase:%s\n",strlwr(name));
	// printf("uppercase:%s\n",strupr(name));
	// printf("reverse:%s\n",strrev(name));
	printf("comparing:%d\n",strcmp(name,name2));
	/* let name=Neha and name2=neha (N=78 ,n=110)
		strcmp(name,name2);//  78 - 110 => -32 => -1
		strcmp(name2,name); // 110 - 78 => 32 => 1
		strcmp(name2,name2); // 110 - 110 => 0 
	*/
	return 0;
}
/*#include<stdio.h>
int main() {
    // declare a variable to store the name
    char *name = (char*) malloc(20);
    
    // read the name from input
    scanf("%s", name);
    
    // print the name 
    printf("Hello %s", name);
}
*/