#include <stdio.h>
#include <conio.h>
void main()
{
	int no1,no2;
	clrscr();

	printf("\n Enter value of no1: ");
	scanf("%d",&no1);

	printf("\n Enter value of no2: ");
	scanf("%d",&no2);

	if(no1>no2)
	{
		printf("\n No1 is Max");
	}
	else
	{
		printf("\n no2 is Max");
	}

	getch();
}