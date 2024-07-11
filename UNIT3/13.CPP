#include <stdio.h>
#include <conio.h>
void main()
{
	int n,i;
	clrscr();

	float ans,sum=0.0;
	printf("\n Ener Limit-N");
	scanf("%d",&n);

	 for(i=1;i<=n;i++)
	 {
		ans=(float)1/i;
		sum=sum+ans;
		printf("\t %f+",sum);
	 }
	 printf("\n Sum is %f",sum);

	 getch();
}