//read a character from user in uppercase and change it to lowercase
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("Enter a character in UPPERCASE:");
	scanf("%c",&ch);
	if(ch>='A' && ch<='Z')
	{
		printf("Lowercase of '%c' is '%c'.",ch,ch+32);	
	}
	else
	{
		printf("SORRY!!,You have entered Wrong Choice!!");
	}
}
