#include <stdio.h>
#include <conio.h>
void main()
{
	int no1,no2,ans;
	clrscr();

	printf("\n Enter value of No1: ");
	scanf("%d",&no1);

	printf("\n Enter value of No2: ");
	scanf("%d",&no2);

	ans=no1+no2;

	printf("\n Answer is %d",ans);

	getch();
}