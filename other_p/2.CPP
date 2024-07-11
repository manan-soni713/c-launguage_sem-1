#include <stdio.h>
#include <conio.h>
void printnumbers(int n)
{
	if(n<=100)
	{
		printf("%d,",n);
		printnumbers(n+1);
	}
}
void main()
{
	clrscr();

	printnumbers(1);

	getch();
}