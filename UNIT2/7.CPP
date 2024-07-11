#include <stdio.h>
#include <conio.h>
void main()
{
	int marks;
	clrscr();

	printf("\n Enter Marks: ");
	scanf("%d",&marks);

	if(marks>=75)
	{
		printf("\n The result is distriction");
	}
	else if(marks>=60)
	{
		printf("\n The result is First class");
	}
	else if(marks>=60)
	{
		printf("\n The result is second class");
	}
	else if(marks>=35)
	{
		printf("\n The result is Pass Class");
	}
	else
	{
		printf("\n The result is Fail");
	}
	getch();
}