#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b;
	clrscr();

	printf("\n Enter value of A: ");
	scanf("%d",&a);

	printf("\n Enter value of B: ");
	scanf("%d",&b);

	// Swapping two variavbles without using temporary variable using XOR.

	a=a^b;
	b=a^b;
	a=a^b;


	printf("\n After swapping variable\n");
	printf("a:%d\nb:%d\n",a,b);

	getch();
}