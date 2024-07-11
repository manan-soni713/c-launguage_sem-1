#include <stdio.h>
#include <conio.h>
void main()
{
	char ch;
	long int carvalue;
	long int premium;
	clrscr();

	printf("\n Seclect car insurance policy type from a,b, and c : ");
	scanf("%d",&ch);

	printf("\n Enter car value : ");
	scanf("%d",&carvalue);

	switch(ch)
	{
		case 'a':
		case 'A':
			  premium=(carvalue*2)/100;
			  printf("\n premium is l%d",premium);
			  break;
		case 'b':
		case 'B':
			 premium=(carvalue*3)/100;
			 printf("\n premium is l%d",premium);
			 break;
		case 'c':
		case 'C':
			 premium=(carvalue*5)/100;
			 printf("\n premium is l%d",premium);
			 break;
		default:
			 printf("\n Wrong choice of premium type : ");
			 break;
	}
	getch();
}