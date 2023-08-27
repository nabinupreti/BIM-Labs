#include <stdio.h>
void main()
{
	char a[100];
	int count=0,i;
	printf("Enter a line:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
		count++;
	}
	printf("No of vowel letter is %d",count);
	
}
