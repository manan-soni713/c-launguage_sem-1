#include <stdio.h>
#include <conio.h>
void main()
{
	int sec,h,m,s;
	clrscr();

	printf("\n Enter Seconds: ");
	scanf("%d",&sec);

	h=(sec/360);

	m=(sec-(3600*h))/60;

	s=(sec-(3600*h)-(m*60));

	printf("\ n %d:%d:%d \n",h,m,s);

	getch();
}