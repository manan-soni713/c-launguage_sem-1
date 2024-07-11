#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,temp;
	clrscr();

	printf("\n Enter value of a: ");
	scanf("%d",&a);

	printf("\n Enter value of b: ");
	scanf("%d",&b);

	printf("\n Before change a=%d and b=%d",a,b);

	temp=a;
	a=b;
	b=temp;

	printf("\n After interchanging a=%d and b=%d",a,b);

	getch();
}