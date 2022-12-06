#ifndef __OP_H
#define __OP_H

#include<stdio.h>
#include "conio.h"
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
#include "assert.h"

struct item 
{
	char cosmeticproductname[40],cosmeticproductcomp[40],c;
	int cosmeticproductid;
	int cosmeticprice;
	int cosmeticquantity;
}st;


void add_item();
void deleteproduct();
void read_item();
void edit_item();
int price();

#endif