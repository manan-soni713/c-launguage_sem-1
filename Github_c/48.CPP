#include <stdio.h>
#include <conio.h>
void main()
{
	int i,no,ans;
	clrscr();

	printf("\n Enter no ypu want to maltiflication table= : ");
	scanf("%d",&no);

	for(i=1;i<=10;i++)
	{
		ans=no*i;

		printf("\n %d*%d=%d",no,i,ans);
	}

	getch();
}