#include <stdio.h>
#include <conio.h>
void main()
{
	int i=1,ans;
	clrscr();

	do
	{
		ans=5*i;
		printf("\n5*%d=%d",i,ans);
		i++;
	}while(i<=10);
	getch();
}