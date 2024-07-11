#include <stdio.h>
#include <conio.h>
void main()
{
	int ang1,ang2,ang3,total;

	clrscr();

	printf("\n Enter the angles of triangle 1: ");
	scanf("%d",&ang1);

	printf("\n Enter the angles of triangle 2: ");
	scanf("%d",&ang2);

	printf("\n Enter the angles of triangle 3: ");
	scanf("%d",&ang3);

	total=ang1+ang2+ang3;

	if(total==180 && ang1!=0 && ang2!=0 && ang3!=0)
	{
		printf("Triangle is valid: ");
	}
	else
	{
		printf("\n Triangle is not valid: ");
	}

	getch();
}