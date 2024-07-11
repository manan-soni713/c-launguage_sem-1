#include <stdio.h>
#include <conio.h>
void main()
{
	int x,n,ans,i;

	printf("\n Enter Limit-N");
	scanf("%d",&n);

	printf("\n Enter value of x:");
	scanf("%d",&x);

	for(i=1;i<=n;i++)
	{
		ans=x*i;
		printf("\t %d",ans);
	}
	getch();
}