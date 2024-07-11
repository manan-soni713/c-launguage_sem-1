#include <stdio.h>
#include <conio.h>
void main()
{
	int n1,n2,n3;
	clrscr();

	printf("\n Enter first number: ");
	scanf("%d",&n1);

	printf("\n Square=%d and cube=%d",(n1*n1),(n1*n1*n1));

	printf("\n Enter second number: ");
	scanf("%d",&n2);

	printf("\n Square=%d and cube=%d",(n2*n2),(n2*n2*n2));

	printf("\n Enter third number: ");
	scanf("%d",&n3);

	printf("\n Square=%d and cube=%d",(n3*n3),(n3*n3*n3));

	getch();
}