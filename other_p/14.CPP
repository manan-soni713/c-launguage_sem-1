#include <stdio.h>
#include <conio.h>
void main()
{
	int a[3][3],i,j;
	clrscr();

	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n Enter Array Elemnts: \n");
			scanf("%d",&a[i][j]);
		}
	}

	printf("\n Array Elements are in: \n");

	for(i=0;i<=3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("\n %d",a[i][j]);
		}
	}

	getch();
}