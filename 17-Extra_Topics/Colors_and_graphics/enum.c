#include<stdio.h>
enum color{ RED, GREEN, BLUE };
int main(){
enum color chosenColor;
printf("Enter a number between 0 and 2\n");
scanf("%d", (int*)&chosenColor);
printColor(chosenColor);
return 0;
}
void printColor(enum color chosenColor)
{
const char *color_name = "Invalid color";
switch (chosenColor)
{
case RED:
color_name = "RED";
break;
case GREEN:
color_name = "GREEN";
break;
case BLUE:
color_name = "BLUE";
break;
}
printf("%s\n", color_name);
}