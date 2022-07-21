#include <stdio.h>

void demostatic();

void main()
{
   demostatic();
   demostatic();
   demostatic();	
}

 void demostatic()
{
	static int x =10;
	x=x+2;
	printf("\n x=%d",x);
	
}