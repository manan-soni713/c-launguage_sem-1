#include <stdio.h>
#include <conio.h>
void main()
{
	int no1,no2,no3,ans;
	clrscr();

	printf("\n Enter Number 1: ");
	scanf("%d",&no1);

	printf("\n Enter Number 2: ");
	scanf("%d",&no2);

	printf("\n Enter Number 3: ");
	scanf("%d",&no3);

	ans=((no1<no2)?((no1<no3)?no1:no3):((no2<no3)?no2:no3));

	printf("\n %d is minimum number",ans);

	getch();
}