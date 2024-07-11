#include <stdio.h>
#include <conio.h>
void main()
{
	int i,n,fact=1;
	clrscr();

	printf("\n Enter Number : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}

	printf("\n Factorial  %d is %d",n,fact);

	getch();
}