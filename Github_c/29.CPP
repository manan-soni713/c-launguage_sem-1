#include <stdio.h>
#include <conio.h>
void main()
{
	int no1,no2,no3;
	clrscr();

	printf("\n Enter value of no 1: ");
	scanf("%d",&no1);

	printf("\n Enter value of no 2: ");
	scanf("%d",&no2);

	printf("\n Enter value of no 3: ");
	scanf("%d",&no3);

	if(no1>no2 && no1>no3)
	{
		printf("\n No 1 is max");
	}
	else if(no2>no3)
	{
		printf("\n No  2 is max");
	}
	else
	{
		printf("\n No 3 is max");
	}

	getch();
}