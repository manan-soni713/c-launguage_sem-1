#include <stdio.h>
#include <conio.h>
void main()
{
	int r,circumference;
	clrscr();

	printf("\n Enter value of r: ");
	scanf("%d",&r);

	circumference=2*3.14*r;

	printf("\n Circumference is %d",circumference);

	getch();
}