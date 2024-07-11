#include <stdio.h>
#include <conio.h>
void main()
{
	int no;
	clrscr();

	printf("\n Enter no: ");
	scanf("%d",&no);

	if(no==100)
	{
		printf("\n Correct no");
	}
	else
	{
		printf("\n InCorrect No");
	}

	getch();
}