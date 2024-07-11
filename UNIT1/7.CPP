#include <stdio.h>
#include <conio.h>
void main()
{
	int i;
	char s[50];
	clrscr();

	printf("\n Enter Text: ");
	gets(s);

	printf("\n Strih=%s",s);
	i=0;

	while(s[i]!='\0')
	{
		i++;
	}

	printf("\n Length=%d",i);

	getch();
}