#include <stdio.h>
#include <conio.h>
void main()
{
	int year;
	clrscr();

	printf("\n Enter Year: ");
	scanf("%d",&year);

	if(year%4==0)
	{
		printf("\n Year is leap year");
	}
	else
	{
		printf("\n Year is not leap year");
	}
	getch();
}