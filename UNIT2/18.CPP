#include <stdio.h>
#include <conio.h>
void main()
{
	int basic;
	float hra,da,gross;
	clrscr();


	printf("\n Enter the basic salary: ");
	scanf("%d",&basic);

	if(basic>=2000)
	{
		hra=30;
		da=95;
	}
	else if(basic>=1000)
	{
		hra=25;
		da=90;
	}
	else
	{
		hra=20;
		da=80;
	}
	gross=basic+((basic*hra)/100)+((basic*da)/100);

	printf("\n Basic =%d HRA=%f DA=%f Gross=%f",basic ,hra,da,gross);

	getch();
}