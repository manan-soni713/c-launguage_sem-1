#include <stdio.h>
#include <conio.h>
void main()
{
	int no1,no2;
	clrscr();

	printf("\n Enter the value of no1: ");
	scanf("%d",&no1);

	printf("\n Enter the value of no2: ");
	scanf("%d",&no2);

	if(no1>=no2)
	{
		if(no1>no2)
	{
		printf("\n No1 1 is maximum: ");
	}
	else
	{
		printf("\n No1 and No2 are equal %d-%d",no1,no2);
	}
	}
	else
	{
		printf("\n No2 is maximum");
	}
	getch();
}