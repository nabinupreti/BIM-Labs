//read a character from user in lowercase and change it to uppercase
#include<stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf("Enter a character in lowercase:");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z')
	{
		printf("Uppercase of '%c' is '%c'.",ch,ch-32);	
	}
	else
	{
		printf("SORRY!!,You have entered Wrong Choice!!");
	}
}
