#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b;
	clrscr();

	printf("\n Enter value of a: ");
	scanf("%d",&a);

	printf("\n Enter value of b: ");
	scanf("%d",&b);

	printf("\n A value is %d and B value is %d",a,b);

	a=a+b;
	b=a-b;
	a=a-b;

	printf("\n A value is %d and b vvalue is %d",a,b);

	getch();
}