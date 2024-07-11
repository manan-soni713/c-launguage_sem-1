#include <stdio.h>
#include <conio.h>
void main()
{
	int no;
	clrscr();

	printf("\n Enter value of no: ");
	scanf("%d",&no);

	if(no>=0)
	{
		if(no>0)
		{
			printf("\n No is positive");
		}
		else
		{
			printf("\n No is Zero");
		}
	}
	else
	{
		printf("\n No is negetive");
	}

	getch();

}