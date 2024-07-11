#include <stdio.h>
#include <conio.h>
void main()
{
	int arr[7]={11,12,13,14,15,15};
	int i;
	clrscr();

	for(i=0;i<7;i++)
	{
		if(arr[i]==arr[i+1])
		{
			i++;
		}
		printf("\n %d",arr[i]);
	}
	getch();
}