#include <stdio.h>
#include <conio.h>
void main()
{
	int marks,per;

	clrscr();

	printf("\n Enter the percentage of Attendance: ");
	scanf("%d",&per);

	if(per>=70)
		marks=5;
	else if(per>=60 && per<=70)
		marks=4;
	else if(per>=50 && per<=60)
		marks=3;
	else
		marks=2;

		printf("\n percentage=[%d] Marks= %d",per,marks);

		getch();
}