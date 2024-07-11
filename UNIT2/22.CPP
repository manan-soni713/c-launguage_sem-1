#include <stdio.h>
#include <conio.h>
void main()
{
	int s1,s2,s3;
	clrscr();

	printf("\n Enter three sides of traiangle: ");
	scanf("%d %d %d",&s1,&s2,&s3);

	if(s1==s2 && s2==s3)
	{
		printf("\n Equilateral triangle: All sides are equal");
	}
	else if(s1==s2||s1==s3||s1==s2)
	{
		printf("\n Scalence triangle: No sides are equal");
	}
	else
	{
		printf("\n Scalence triangle: No sides are equal");
	}
	getch();
}