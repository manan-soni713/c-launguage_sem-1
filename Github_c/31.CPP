#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,c,max;
	clrscr();
	printf("\n Enter value of A: ");
	scanf("%d",&a);
	printf("\n Enter value of B: ");
	scanf("%d",&b);
	printf("\n Enter value of C: ");
	scanf("%d",&c);

	max=(a>b)?((a>c)?a:c):((b>c)?b:c);

	printf("\n MAx value is %d",max);

	getch();
}