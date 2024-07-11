#include <stdio.h>
#include <conio.h>
void main()
{
	int p,r,n;
	clrscr();
	float si;

	printf("\n Enter value of P: ");
	scanf("%d",&p);
	printf("\n Enter value of R: ");
	scanf("%d",&r);
	printf("\n Enter value of N: ");
	scanf("%d",&n);

	si=(p*r*n)/100;

	printf("\n Simple intrest is %f",si);

	getch();
}