#include <stdio.h>
#include <conio.h>
void main()
{
	int no1,no2,no3,ans;
	clrscr();

	printf("\n Enter value of no1: ");
	scanf("%d",&no1);

	printf("\n Enter value of no2: ");
	scanf("%d",&no2);

	printf("\n Enter value of no3: ");
	scanf("%d",&no3);

	ans=no1*no2*no3;

	printf("\n Answer is %d",ans);

	getch();
}