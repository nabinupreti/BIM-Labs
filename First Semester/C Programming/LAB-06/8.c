//lowercase to uppercase
#include  <stdio.h>
void main()
{
	char a[299];
	int i;
	printf("Enter a sentence/word:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='a'&&a[i]<='z'){
			a[i]=a[i]-32;
		}
		else if(a[i]>='A'&&a[i]<='Z'){
			a[i]=a[i]+32;
		}
	}
	printf("After conversion:\n");
	puts(a);
}
