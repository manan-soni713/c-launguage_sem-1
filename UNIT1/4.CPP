#include <stdio.h>
#include <conio.h>
void main()
{
	float f;
	clrscr();

	printf("\n Enter temprature in Farhrehit: ");
	scanf("%f",&f);

	printf(" Converted to Celsius=%f",((f-32)*5)/9);

	getch();
}