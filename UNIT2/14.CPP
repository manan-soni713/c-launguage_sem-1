#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	float a,b,c,x,y,z;
	clrscr();

	printf("\n ENTER FIRST SIDE: ");
	scanf("%f",&a);

	printf("\n ENTER DECOND SIDE: ");
	scanf("%f",&b);

	printf("\n ENTER THIRD SIDE: ");
	scanf("%f",&c);

	x=sqrt((a*a)+(b*b));
	y=sqrt((b*b)+(c*c));
	z=sqrt((c*c)+(a*a));

	if(c==x||a==y||b==z)
		printf("\n RIGHT TRIANGLE");
	else
		printf("\n NOT RIGHT TRIANGLE");

		getch();

}