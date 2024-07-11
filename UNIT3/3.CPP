#include <stdio.h>
#include <conio.h>
void main()
{
	int n,i,max=0,no;

	clrscr();

	printf("\n Enter value of limit : ");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		printf("\n Enter No : ");
		scanf("%d",&no);

		if(max<no)
			max=no;
	}


	printf("\n Maximum is %d",max);

	getch();
}
