#include <stdio.h>
#include <conio.h>
void main()
{
	int n,i,j,k,sp=40;
	printf("\n Enter Limit-N");
	scanf("%d",&n);

	for(i=1;i<=n;i++)
	{
		for(k=1;k<=sp;k++)
		{
			printf(" ");
		}
		for(j=1;j<=i;j++)
		{
			printf(" * ");
		}
		sp=sp-2;
		printf("\n");
	}
	getch();
}