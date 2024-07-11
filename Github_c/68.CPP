#include <stdio.h>
#include <conio.h>
void main()
{
	int no;
	clrscr();

	label:
	printf("\n Enter positive number only=");
	scanf("%d",&no);

	if(no<=0)
	{
		goto label;
	}
	printf("\n positive number is %d",no);
	getch();
}