#include <stdio.h>
#include <conio.h>
void main()
{
	int p,r,n,i;
	clrscr();

	printf("\n Enter amount of principal:");
	scanf("%d",&p);

	printf("\n Enter period in year:");
	scanf("%d",&r);

	printf("\n Enter intrest: ");
	scanf("%d",&n);

	i=(p*r*n)/100;

	printf("\n Simple Instrest=%d",i);

	getch();
}