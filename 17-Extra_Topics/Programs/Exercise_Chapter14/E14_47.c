/*E14.47*/
#include<stdio.h>
char unpack(int n, int p);
unsigned pack_chars1(char c1,char c2,char c3,char c4);
unsigned pack_chars2(char c1,char c2,char c3,char c4);
int main(void)
{
	int p1,p2;
	p1 = pack_chars1('p','q','r','s');
	p2 = pack_chars2('p','q','r','s');
	printf("%c %c %c %c\n",unpack(p1,0),unpack(p1,1), unpack(p1,2), unpack(p1,3));
	printf("%c %c %c %c\n",unpack(p2,0),unpack(p2,1), unpack(p2,2), unpack(p2,3));
	return 0;
}
unsigned pack_chars1(char c1,char c2,char c3,char c4)
{
	int n;
	n = c1;
	n = n | c2<<8;
	n = n | c3<<16;
	n = n | c4<<24;
	return n;
}
unsigned pack_chars2(char c1,char c2,char c3,char c4)
{
	int n;
	n = c1;
	n = (n<<8) | c2;
	n = (n<<8) | c3;
	n = (n<<8) | c4;
	return n;
}
char unpack(int n, int p)
{
	unsigned mask = 0xFF << p*8;
	return  (n & mask)>>p*8;
}
