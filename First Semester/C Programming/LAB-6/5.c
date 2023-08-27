//count how many 'a' character are there
#include <stdio.h>
void main()
{
	char a[100];
	int i,count=0;
	printf("Enter a line:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'){
			count++;
		}
	}
	printf("There are %d 'a' character.",count);
}
