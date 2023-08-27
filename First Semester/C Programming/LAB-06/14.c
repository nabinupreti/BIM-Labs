//given word palindrome or not
#include <stdio.h>
#include <string.h>
void main()
{
	char a[100],b[100];
	int i,len,flag=0;
	printf("Enter a word:");
	gets(a);
	len=strlen(a);
	len--;
	for(i=len;i>=0;i--)
	{
		b[len-i]=a[i];	
	}
	b[len+1]='\0';
	for(i=0;a[i]!='\0';i++)
	{
		if(b[i]!=a[i])
		{
			flag=1;
			break;	
		}
	}
	if(flag==0)
	printf("Palindrome");
	else
	printf("Not Palindrome\n");
	puts(b);	
}

