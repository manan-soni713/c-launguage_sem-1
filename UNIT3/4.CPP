#include <stdio.h>
#include <conio.h>
void main()
{
	int rem,rev=0,no;

	clrscr();

	printf("\n Enter Number : ");
	scanf("%d",&no);

	while(no>0)
	{
		rem=no%10;
		rev=(rev*10)+rem;
		no=no/10;
	}

	printf("\n The Reverse Numbers is %d",rev);

	getch();
}