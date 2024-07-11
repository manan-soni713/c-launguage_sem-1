#include <stdio.h>
#include <conio.h>
void main()
{
	int age;
	clrscr();

	printf("\n Enter age of blood donor\n\n");
	scanf("%d",&age);

	if(age>18 && age<=55)
	{
		printf("\n The age of blood donor is %d and is eligible",age);
	}
	else
	{
		printf("\n The age of blood donor is %d and is NOT eligible",age);
	}
	getch();
}