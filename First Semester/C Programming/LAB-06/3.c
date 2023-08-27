//count letter, digit and whitespace
#include <stdio.h>
void main()
{
	char a[100];
	int i,l=0,d=0,w=0;
	printf("Enter a sentence: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
		{
			l++;
		}
		else if(a[i]>='0'&&a[i]<='9')
		{
			d++;
		}
		else if(a[i]==' ')
		{
			w++;
		}
	}
	printf("There are %d letters, %d digits and %d whitespaces.",l,d,w);
}
