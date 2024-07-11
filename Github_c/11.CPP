#include <stdio.h>
#include <conio.h>
void main()
{
	int l,b,ans;
	clrscr();

	printf("\n Enter value of l: ");
	scanf("%d",&l);

	printf("\n Enter value of b: ");
	scanf("%d",&b);

	ans=l*b;

	printf("\n Answer is %d",ans);

	getch();
}