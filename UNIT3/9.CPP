#include <stdio.h>
#include <conio.h>
void main()
{
	long int i,odd=0,even=0;

	for(i=1;i<=100;i++)
	{
		if(i%2!=0)
		{
			odd=odd+i;
		}
		else
		{
			even=even+i;
		}
	}
		printf("\n The sum of even numbers is %d",even);
		printf("\n The sum of odd numbers is %d",odd);

		getch();
}
