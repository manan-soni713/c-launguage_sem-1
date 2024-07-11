#include <stdio.h>
#include <conio.h>
void main()
{
	clrscr();
	int no1,no2,no3,no4,ans;

	printf("\n Enter value of no1: ");
	scanf("%d",&no1);

	printf("\n Enter value of no2: ");
	scanf("%d",&no2);

	printf("\n Enter value of no3: ");
	scanf("%d",&no3);

	printf("\n Enter value of no4: ");
	scanf("%d",&no4);

	ans=no1*no2*no3*no4;

	printf("\n Answer is %d",ans);

	getch();
}