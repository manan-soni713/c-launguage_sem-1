#include <stdio.h>
#include <conio.h>
void main()
{
	int no;
	clrscr();

	printf("\n Enter v alue between 0 to 6=");
	scanf("%d",&no);

	switch(no)
	{
		case 0:printf("\n sunday:");
		       break;
		case 1:
			printf("\n Monday:");
			break;
		case 2:
			printf("\n tuseday:");
			break;
		case 3:
			printf("\n wedneday:");
			break;
		case 4:
			printf("\n thursday:");
			break;
		case 5:
			printf("\n friday:");
			break;
		case 6:
			printf("\n sturday:");
			break;
		default:
			printf("\n Incorrect no:");
			break;
	}
	getch();
}