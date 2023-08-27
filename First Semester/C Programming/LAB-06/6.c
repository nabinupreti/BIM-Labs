//cout words in string
#include <stdio.h>
void main()
{
	char a[100],temp;
	int i,w=1;
	printf("Enter a line:");
	gets(a);
	for(i=1;a[i]!='\0';i++)
	{
		if(a[i]==' '){
			w++;
		}
	}
	printf("There are %d words.",w);
}
