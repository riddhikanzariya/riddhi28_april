#include <stdio.h>

void main()
{
	int disp[2][3];
	int i ,j;
	for(i =0; i<2; i++)
	{
		for(j =0; j<3 ; j++)
		{
			printf("enter value for disp[%d] :",i ,j);
			scanf("%d",&disp[i][j]);
		}
			
		
	}
	printf("two dimensional array elements :\n");
	for(i =0; i<2; i++)
	{
		for(j =0; j<3 ; j++)
		{
			printf("%d",disp[i][j]);
			if(j == 2)
			{
				printf("\n");
			}
		}
	}
	
	
}