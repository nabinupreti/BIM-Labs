//Fint type of entered character
#include<stdio.h>
void main()
{
	char ch;
	printf("Enter a character:");
	scanf(" %c",&ch);
	if(ch>='0' && ch<='9')
	{
		printf("%c is digit",ch);
	}
	else if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
	{
		printf("%c is Alphabet",ch);
	}
	else
	{
		printf("%c is Special Character",ch);
	}
}
