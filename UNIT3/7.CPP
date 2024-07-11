#include <stdio.h>
#include <conio.h>
void main()
{
	int a,b,x,y,t,gcd,lcm;
	clrscr();

	printf("\n Enter two integers\n");
	scanf("%d %d",&x, &y);

	a=x;
	b=y;

	while(b!=0)
	{
		t=b;
		b=a%b;
		a=t;
	}
	gcd=a;
	lcm=(x*y)/gcd;
	printf("\n Gratest common divsior of %d and %d=%d\n",x,y,gcd);
	printf("\n Least common multiple of %d and %d=%d\n",x,y,lcm);

	getch();
}