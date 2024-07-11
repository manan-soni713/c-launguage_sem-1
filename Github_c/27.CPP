#include <stdio.h>
#include <conio.h>
void main()
{
	int no;
	clrscr();

	printf("\n Enter Month: ");
	scanf("%d",&no);

	if(no==0)
	{
		printf("\n January");
	}
	else if(no==1)
	{
		printf("\n Febaruary");
	}
	else if(no==3)
	{
		printf("\n  March");
	}
	else if(no==4)
	{
		printf("\n April");
	}
	else if(no==5)
	{
		printf("\n May");
	}
	else if(no==6)
	{
		printf("\n June");
	}
	else if(no==7)
	{
		printf("\n July");
	}
	else if(no==8)
	{
		printf("\n August");
	}
	else if(no==9)
	{
		printf("\n September");
	}
	else if(no==10)
	{
		printf("\n October");
	}
	else if(no==11)
	{
		printf("\n November");
	}
	else if(no==12)
	{
		printf("\n December");
	}
	else
	{
		printf("\n Wrong Number Entred: ");
	}

	getch();
}