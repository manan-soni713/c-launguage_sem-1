#include <stdio.h>
#include <conio.h>
void main()
{
	int no,flag=0,i;
	clrscr();
	printf("\n Enter value of n");
	scanf("%d",&no);

	for(i=2;i<no;i++)
	{
		if(no%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		printf("\n The number is prime");
	}
	else
	{
		printf("\n The number is not a prime number");
	}

	getch();

}