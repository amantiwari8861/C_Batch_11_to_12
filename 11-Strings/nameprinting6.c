#include<stdio.h>
#include<string.h>
void remove_newline(char[]);
int main()
{
	char name[10],name2[20];
	printf("enter the name1 :");
	fgets(name,10,stdin);
	fflush(stdin);
	printf("enter the name2 :");
	fgets(name2,20,stdin);
	fflush(stdin);
	remove_newline(name);
	remove_newline(name2);
	// printf("%s length 1 = %d\n",name,strlen(name));
	// printf("%s length 2 = %d\n",name2,strlen(name2));
	// printf("size of name2 array: %d\n",name2,sizeof(name2));
	// strcpy(name,name2);
	// printf("copied data is  :%s\n",name);
	// strcat(name,"@");
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
void remove_newline(char str[])
{
	int len = strlen(str);
	if (str[len - 1] == '\n')
  		str[len -1] = '\0';
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