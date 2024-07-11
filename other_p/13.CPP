#include <stdio.h>
#include <conio.h>
void main()
{
	int 	a[10],i;
	clrscr();

	for(i=0;i<10;i++)
	{
		printf("\n Enter Array Elements: ");
		scanf("%d",&a[i]);
	}

	printf("\n Array Elements are in: \t");

	for(i=0;i<10;i++)
	{
		printf("\t %d",a[i]);
	}

	getch();
}