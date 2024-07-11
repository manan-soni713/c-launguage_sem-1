#include <stdio.h>
#include <conio.h>
void main()
{
	int no;
	Input:

	printf("\n Enter Number: ");
	scanf("%d",&no);

	if(no<0)
	{
		goto Input;
	}
	printf("\n Positive number is %d",no);

	getch();
}2