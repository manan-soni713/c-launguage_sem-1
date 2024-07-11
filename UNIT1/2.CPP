#include <stdio.h>
#include <conio.h>
void main()
{
	int l,b;
	clrscr();

	printf("\n Enter side of a Square:");
	scanf("%d",&l);

	printf("\n AREA=%d",(l*l));
	printf("\n perimeter=%d",(4*4));
	printf("\n Enter the length of rectangle:");
	scanf("%d",&l);
	printf("\n Enter the breadth of a rectangle:");
	scanf("%d",&b);
	printf("\n Area=%d",(l*b));
	printf("\n Area=%d",2*(l+b));
	getch();
}
