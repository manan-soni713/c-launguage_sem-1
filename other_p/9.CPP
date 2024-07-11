#include <stdio.h>
#include <conio.h>
void main()
{
	int no1=0,no2=1,no3,limit;
	clrscr();

	printf("\n Enter limit: ");
	scanf("%d",&limit);


	printf("%d %d",no1,no2);

	while(no3<limit)
	{
		no3=no1+no2;
		no1=no2;
		no2=no3;
		printf("%d",no3);
	}

	getch();
}