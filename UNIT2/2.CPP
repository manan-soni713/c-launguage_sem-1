#include <stdio.h>
#include <conio.h>
void main()
{
	int no1,no2,no3;
	clrscr();

	printf("\n Enter Number 1: ");
	scanf("%d",&no1);

	printf("\n Enter Number 2: ");
	scanf("%d",&no2);

	printf("\n Enter Number 3: ");
	scanf("%d",&no3);

	if(no1>no2)
	{
		if(no1>no3)
		{
			printf("\n No 1 i maximum");
		}
		else
		{
			printf("\n No 3 is maximum");
		}
	}
	else
	{
		if(no2>no3)
		{
			printf("\n No2 is maximim ");
		}
		else
		{
			printf("\n No3 is maximum");
		}
	}
		getch();
}