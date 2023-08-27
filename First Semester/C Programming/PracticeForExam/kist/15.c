#include <stdio.h>
void main()
{
	char a[100];
	int i;
	printf("Enter a string:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A'&&a[i]<='Z')
		{
			a[i]+=32;
		}
	}
	printf("After converting in uppercase:\n %s",a);
}
