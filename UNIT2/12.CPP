#include <stdio.h>
#include <conio.h>
void main()
{
	int no1,no2,ans;
	char ch;
	clrscr();

	printf("\n Enter your choice + for addition,- for substraction * for multiflication/ for devision \n ");
	scanf("%c",&ch);

	printf("\n Enter no 1: ");
	scanf("%d",&no1);

	printf("\n Enter no 2: ");
	scanf("%d",&no2);

	switch(ch)
	{
		case '+':
			 ans=no1+no2;
			 printf("\n Ans is %d",ans);
			 break;
		case '-':
			 ans=no1-no2;
			 printf("\n Ans is %d",ans);
			 break;
		case '*':
			 ans=no1*no2;
			 printf("\n Ans is %d",ans);
			 break;
		case '/':
			 ans=no1/no2;
			 printf("\n Ans is %d",ans);
			 break;
		default:
			printf("\n Wrong choice Entered.......!");
			break;

	}
	getch();
}