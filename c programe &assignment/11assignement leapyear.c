#include <stdio.h>

void main()
{
	int y;
	printf("Enter the year to check  :");
	scanf("%d",&y);
	
	if (((y %4 == 0)&&(y %100 != 0)) ||(y%400 == 0))
	{
	
	printf("it is a leap year");
    }
	else
	{
	
	printf("it is not a leap year");
    }
}

