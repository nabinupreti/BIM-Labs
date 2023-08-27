#include <stdio.h>
#include <string.h>
void main()
{
	char sen[200];
	char word[100];
	printf("Enter a sentence:");
	gets(sen);
	printf("Enter a word to search:");
	gets(word);
	if(strstr(sen,word))
	{
		printf("Word has been found");
	}
	else
	{
		printf("Word has not been found");
	}
	printf("\n%s",strstr(sen,word));
}
