#include <stdio.h>
#include <conio.h>
void main()
{
	int r,h,ans;
	clrscr();

	printf("\n Enter value of r: ");
	scanf("%d",&r);

	printf("\n Enter value of h: ");
	scanf("%d",&h);

	ans=3.14*r*r*h;

	printf("\Answer is %d",ans);

	getch();
}