#include <stdio.h>
void main()
{
	int i,len=0;
	char a[100],b[100];
	printf("Enter a string:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		len++;
	}
	len--;
	for(i=0;a[i]!='\0';i++)
	{
		b[len]=a[i];
		printf("b[%d] = %c\n",len,a[i]);
		len--;
	}
	b[i]='\0';
	printf("Original string = %s\n",a);
	printf("Reversed string = %s",b);
}
