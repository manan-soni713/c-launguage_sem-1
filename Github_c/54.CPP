#include <stdio.h>
#include <conio.h>
void main()
{
	int i=1,no,ans;
	clrscr();

	printf("Enter no you want to multiflication table=");
	scanf("%d",&no);

	do
	{
		ans=no*i;
		printf("\n%d*%d=%d",i,no,ans);
		i++;
	}while(i<=10);
	getch();
}