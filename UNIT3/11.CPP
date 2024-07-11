#include <stdio.h>
#include <conio.h>
void main()
{
	int no,flag=0,i,j;
	clrscr();

	for(j=50;j<=100;j++)
	{
		flag=0;
		for(i=2;i<j;i++)
		{
			if(j%i==0)
			{
				flag=1;
				break;
			}
		}
		if(flag==0)
			printf("\n The number is prime %d",j);
	}

	getch();
}