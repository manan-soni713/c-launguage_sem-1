#include <stdio.h>
#include <conio.h>
void main()
{
	int n;
	clrscr();

	printf("\n Enter number: ");
	scanf("%d",&n);

	printf("\n Divided by 2,reminder=%d",n%2);
	printf("\n Divided by 3,reminder=%d",n%3);
	printf("\n Divided by 4,reminder=%d",n%4);

	getch();
}