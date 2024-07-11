#include <stdio.h>
#include <conio.h>
void main()
{
	int cp,sp,profit,loss;

	clrscr();

	printf("\n Enter Cost Price: ");
	scanf("%d",&cp);

	printf("\n Enter selling price: ");
	scanf("%d",&sp);

	if(sp>cp)
	{
		profit=sp-cp;
		printf("Profit=%d",profit);
	}
	else if(cp>sp)
	{
		loss=cp-sp;
		printf("Loss =%d",loss);
	}
	else
		printf("No profit No Loss.");

	getch();
}