#include <stdio.h>
#include <conio.h>
void main()
{
	int total,discount;
	float discount_amount;
	clrscr();

	printf("\n Enter the total amount: ");
	scanf("%d",&total);

	if(total>=1000)
	{
		discount=20;
	}
	else
	{
		discount=10;
	}
	discount_amount=(total*discount)/100;

	printf(" The discount amount is %f",discount_amount);

	getch();
}