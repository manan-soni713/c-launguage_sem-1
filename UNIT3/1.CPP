#include <stdio.h>
#include <conio.h>
void main()
{
	int i,n,sum=0;
	clrscr();

	printf("\n Enter limit - Value of N : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}

	printf("\n Sum is %d",sum);

	getch();
}