//WAP to read a character and convert in to uppercase if it is in lowercasr and vice vesa
//using function with argument and return type
#include <stdio.h>
char convertCase(char);
void main()
{
	char a,res;
	printf("Enter an alphabet:");
	scanf(" %c",&a);
	res=convertCase(a);
	printf("After case conversion : %c",res);
}
char convertCase(char c)
{
	if(c>='a' && c<='z')
	{
		return c-32;
	}
	else
	{
		return c+32;
	}
}
