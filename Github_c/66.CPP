#include <stdio.h>
#include <conio.h>
void main()
{
	int no,i=1;
	clrscr();
	printf("999  will stop further task");

	while(i<=100)
	{
		printf("\n Enter no=");
		scanf("%d",&no);

		if(no==999)
		{
			break;
		}
		printf("\n Entred no is %d",no);
		i++;
	}
	getch();
}