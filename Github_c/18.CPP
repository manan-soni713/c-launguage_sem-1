#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,t;
	clrscr();

	printf("\n Enter value of a: ");
	scanf("%d",&a);

	printf("\n Enter value of b: ");
	scanf("%d",&b);

	printf("\n A value is %d and B value is %d",a,b);

	t=a;
	a=b;
	b=t;

	printf("\n A Value is %d and B value is %d",a,b);

	getch();
}