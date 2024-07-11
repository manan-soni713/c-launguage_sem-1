#include <stdio.h>
#include <conio.h>
void main()
{
	int no;
	clrscr();

	printf("\n Enter no: ");
	scanf("%d",&no);


	if(no>=0)
	{
		if(no>0)
		{
			printf("\n Number is positive : ");
		}
		else
		{
			printf("\n Number is Zero: ");
		}
	}
	else
	{
		printf("\n Number is negetive ; ");
	}
	getch();
}