//search words in sentence
#include<stdio.h>
#include<string.h>
void main()
{
	char sen[50],word[20];
	int i=0,j=0,flag=0,n,m;
	printf("Enter a sentence:");
	gets(sen);
	printf("Enter word to search:");
	gets(word);
	n=strlen(sen);
	m=strlen(word);
	if(m<=n)
	{
		while(i<n)
		{
			j=0;
			while(i<n&&j<m&&sen[i]==word[j])
			{
				i++;
				j++;
			}
			if((i==n||sen[i]==' ')&&j==m)
			{
				flag=1;
				break;
			}
			i++;
		}
	}
	else
	{
		printf("Not found.");
	}
	if(flag==1)
	{
		printf("%s is present.",word);
	}
	else
	{
		printf("%s is not present.",word);
	}
}
