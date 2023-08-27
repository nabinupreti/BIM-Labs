//Uppercase to Lowrcase and Vice-versa
#include <stdio.h>
void main()
{
	char ch;
	printf("Enter a character:");
	scanf("%c",&ch);
	if(ch>='a' && ch<='z'){
		printf("Uppercase = %c",ch-32);
	}
	else{
		printf("Lowercase = %c",ch+32);
	}
}
