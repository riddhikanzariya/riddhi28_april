/*
structure : it stores data of different type.
*/

#include <stdio.h>

struct employee{
	int eid;
	char name[5];
	float sal;
}e1;

void main()
{
	//struct employee e1;
	printf("\n\n-----------employee details-----------\n\n");
	printf("enter id :");
	scanf("%d",&e1.eid);
	printf("enter name :");
	scanf("%s",&e1.name);
	printf("enter salary :");
	scanf("%f",&e1.sal);
	
	printf("\n\n------Display---------\n");
	printf("\neid = %d",e1.eid);
	printf("\nename = %s",e1.name);
	printf("\nsalary = %.2f",e1.sal);
}