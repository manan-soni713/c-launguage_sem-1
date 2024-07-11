#include <stdio.h>
#include <conio.h>
void main()
{
	int no1,no2,no3;
	clrscr();

	printf("\n Enter value of n1: ");
	scanf("%d",&no1);

	printf("\n Enter value of n2: ");
	scanf("%d",&no2);

	printf("\n Enter value of n3: ");
	scanf("%d",&no3);

	if(no1>no2)
	{
		if(no1>no3)
		{
			printf("\n No 1 is maximum: ");
		}
		else
		{
			printf("\n No 3 is Maximum: ");
		}
	}
	else
	{
		if(no2>no3)
		{
			printf("\n No 2 is Maximum: ");
		}
		else
		{
			printf("\n No 3 is Maximum: ");
		}
	}

	getch();
}