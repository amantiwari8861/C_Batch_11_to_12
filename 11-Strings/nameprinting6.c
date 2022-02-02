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
	// printf("length 1 = %d\n",strlen(name));
	// printf("length 2 = %d\n",strlen(name2));
	// printf("size of: %d\n",sizeof(name2));
	// strcpy(name,name2);
	// printf("copied data is  :%s\n",name);
	// strcat(name," ");
	// strcat(name,name2);
	// printf("concatenate : %s\n",name);
	// printf("lowercase:%s\n",strlwr(name));
	// printf("uppercase:%s\n",strupr(name));
	// printf("reverse:%s\n",strrev(name));
	printf("comparing:%d\n",strcmp(name,name2));
	/* let name=Aman and name2=aman (A=65 ,a=97)
		strcmp(name,name2);//  65 - 97 => -32 => -1
		strcmp(name2,name); // 97 - 65 => 32 => 1
		strcmp(name2,name2); // 97 - 97 => 0 
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