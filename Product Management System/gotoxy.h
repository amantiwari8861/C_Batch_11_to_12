#ifndef __GOTOXY_H
#define __GOTOXY_H

#include "op.h"


void gotoxy(short x, short y)
{
	COORD pos ={x,y};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),pos);
}  

#endif