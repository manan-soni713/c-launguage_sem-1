#include <stdio.h>
#include <conio.h>
void main()
{
	int pages,copies;
	long int bill;

	clrscr();

	printf("\n Enter the number of pages and copies  of print out: ");
	scanf("%d %d",&pages,&copies);

	bill=(pages*3)+((copies-1)*3*pages)+(pages*5);

	printf("\n The bill amount is %ld",bill);

	getch();
}