#include <stdio.h>
#include <conio.h>
void main()
{
	int no,rev=0,rem,no1;

	printf("\n Enter Number");
	scanf("%d",&no);

	no1=no;

	while(no>0)
	{
		rem=no%10;
		rev=(rev*10)*rem;
		no=no/10;
	}
	if(rev==no1)
	{
		printf("\n The number is palindrom");
	}
	else
	{
		printf("\n The number is not palindrom");
	}

	getch();
}