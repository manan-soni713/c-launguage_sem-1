#include <stdio.h>
#include <conio.h>
void main()
{
	char ch;
	int no1,no2,ans;
	clrscr();

	printf("\n Enter value of no1 and no2 and Enter Chracter from A,S,M,D=");
	scanf("%d %d %c",&no1,&no2,&ch);

	switch(ch)
	{
		case 'A':
			ans=no1+no2;
			printf("\n Addition is %d",ans);
			break;
		case 'B':
			ans=no1-no2;
			printf("\n Substraction is %d",ans);
			break;
		case 'C':
			ans=no1*no2;
			printf("\n Multiflaiction is %d",ans);
			break;
		case 'D':
			ans=no1/no2;
			printf("\n Division is %d ",ans);
			break;
		default:
			printf("\n Wrong character Entred");
			break;
	}
	getch();
}