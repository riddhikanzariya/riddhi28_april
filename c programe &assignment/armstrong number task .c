#include <stdio.h>

void main()
{
	int number ,remainder ,total =0,temp;
	printf("Enter the number =");
	scanf("%d",&number);
	temp = number;
	
	while(number >0)
	{
		remainder =number %10;
		total = total +(remainder*remainder*remainder);
		number =number/10;
	}
	
	if(temp == total)
	  {
	  	printf("This number is armstrong number");
	  }
	else
	{
		printf("This number is not armstrong number");
	}
	
}