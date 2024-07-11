#include <stdio.h>
#include <conio.h>
void main()
{
	float f;
	clrscr();

	printf("\n Enter Temparture in Farehit: ");
	scanf("%f",&f);

	printf("\n Converted to celcius is %f",(f-32)*5/9);

	getch();
}