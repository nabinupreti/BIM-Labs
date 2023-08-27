#include <stdio.h>
void main()
{
	char a[100],count=0,i;
	printf("Enter a string:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		count++;
	}
	printf("No. of Capital letter in \"%s\" is %d",a,count);
}
