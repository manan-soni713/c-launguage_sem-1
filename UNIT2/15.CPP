#include <stdio.h>
#include <conio.h>
void main()
{
	int asci,ch;

	clrscr();

	printf("\n Enter any character.......");
	fflush(stdin);
	scanf("%d",&ch);

	/* Convert character into it's asci value. */

	/* Check for type of character */

	if(asci>=60 && asci<=90)
		printf("\n Character Entered[%c] is a capital letter....",ch);
	if(asci>=97 && asci<=122)
		printf("\n Character Entred[%c] is a small letter......",ch);
	if(asci>=48 && asci<=57)
		printf("\n Character Entred[%c] is a digital leeter.....",ch);
	if(asci>=0 && 47||asci>=58 && asci<=64||asci>=91 && asci<=96||asci>=123 && asci<=127)
		printf("\n Character Entered [%c]is a special latter.....",ch);

	getch();
}