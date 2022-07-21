#include <stdio.h>

struct employee1{
	int eno;
	char name[20];
	char address[20];
	int age;
	
}e1;

struct employee2{
	int eno;
	char name[20];
	char address[20];
	int age;
}e2;

struct employee3{
	int eno;
	char name[20];
	char address[20];
	int age;
}e3;

struct employee4{
	int eno;
	char name[20];
	char address[20];
	int age;
}e4;

struct employee5{
	int eno;
	char name[20];
	char address[20];
	int age;
}e5;
void main()
{
	int i,n;

	printf("Enter employee info as no, name, address, age");
	printf("\n---------------------------------------------");
	for(i=1;i<=5;i++)
	{
		printf("\nemoployee no : ");
		scanf("%d",&e1.eno);
		printf("\nenter employee name : ");
		scanf("%s",&e1.name);
		printf("\nenter employee address : ");
		scanf("%s",&e1.address);
		printf("\nenter employee age : ");
		scanf("%d",&e1.age);
	printf("\n---------------------------------------------");
	
		
		
	}
	printf("\n--------Display----------\n\n");
	for(i=1;i<=5;i++)
	{
	
	printf("\nno = %d",e1.eno);
	printf("\nname = %s",e1.name);
	printf("\naddress = %s",e1.address);
	printf("\nage = %d",e1.age);
    }

}
