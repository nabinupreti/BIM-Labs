#include <stdio.h>
void main()
{
	char a[50],b[50],c[100],i,len=0;
	printf("Enter first string:");
	gets(a);
	printf("Enter second string:");
	gets(b);
	for(i=0;a[i]!='\0';i++)
	{
		c[i]=a[i];
		len++;
	}	
	for(i=0;b[i]!='\0';i++)
	{
		c[len+i]=b[i];
	}
	c[len+i]='\0';
	printf("\nAfter Concation : %s",c);
}
