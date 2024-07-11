#include <stdio.h>
#include <conio.h>
void main()
{
	int n1,n2;
	clrscr();

	printf("\n Enter First number: ");
	scanf("%d",&n1);

	printf("\n Enter Second number: ");
	scanf("%d",&n2);

	printf("\n Smallest=%d",n1<n2?n1:n2);

	getch();
}