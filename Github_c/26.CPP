#include <stdio.h>
#include <conio.h>
void main()
{
	int no;
	clrscr();

	printf("\n Enter no: ");
	scanf("%d",&no);

	if(no==0)
	{
		printf("\n Sunday");
	}
	else if(no==1)
	{
		printf("\n Mondya");
	}
	else if(no==2)
	{
		printf("\n Tuseday");
	}
	else if(no==3)
	{
		printf("\n Wednesday");
	}
	else if(no==4)
	{
		printf("\n Thurseday");
	}
	else if(no==5)
	{
		printf("\n Friday");
	}
	else if(no==6)
	{
		printf("\n Saturday");
	}
	else
	{
		printf("\n Wrong number Entred: ");
	}

	getch();
}