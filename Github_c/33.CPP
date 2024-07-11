#include <stdio.h>
#include <conio.h>
void main()
{
	int l,a,ans1,ans2,ans3,ans4;
	clrscr();

	printf("\n Enter value of L: ");
	scanf("%d",&l);

	printf("\n Enter value of A: ");
	scanf("%d",&a);

	ans1=l*l;

	printf("\n Area of Square is %d",ans1);

	ans2=l*a;
	printf("\n Area of Rectangle is %d",ans2);

	ans3=4*a;
	printf("\n perimeter of Square is %d",ans3);

	ans4=2*l*a;
	printf("\n perimeter of Rectangle is %d",ans4);

	getch();
}