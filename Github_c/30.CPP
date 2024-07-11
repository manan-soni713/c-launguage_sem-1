#include <stdio.h>
#include <conio.h>
void main()
{
	int max,a,b;
	clrscr();

	printf("\n Enter value of A: ");
	scanf("%d",&a);

	printf("\n Enter value of B: ");
	scanf("%d",&b);

	max=(a>b)?a:b;

	printf("\n Max value is %d",max);

	getch();
}