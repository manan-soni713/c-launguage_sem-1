#include <stdio.h>
#include <conio.h>
void main()
{
	float d1,d2,d3,d4,d5;
	clrscr();

	printf("\n Enter Temprature in Celcius: ");
	printf("\n Day1=");
	scanf("%f",&d1);
	printf("\n Day2=");
	scanf("%f",&d2);
	printf("\n Day3=");
	scanf("%f",&d3);
	printf("\n Day4=");
	scanf("%f",&d4);
	printf("\n Day5=");
	scanf("%f",&d5);

	printf("\n Average=%2f",(d1+d2+d3+d4+d5)/5);

	getch();
}