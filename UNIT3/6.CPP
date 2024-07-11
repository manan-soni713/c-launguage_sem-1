#include <stdio.h>
#include <conio.h>
void main()
{
	int n,no1=0,no2=1,no3=0;
	clrscr();
	printf("\n Enter Limit-N");
	scanf("%d",&n);

	printf("%d %d",no1,no2);

	while(no3<=n)
	{
		no3=no1+no2;
		no1=no2;
		no2=no3;
		printf("\t %d",no3);
	}

	getch();
}