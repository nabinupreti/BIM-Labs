//convert string in to UPPERCASE if first character case is lowercase and vice versa
#include <stdio.h>
void main()
{
	char a[100];
	int i;	
	printf("Enter a sentence:");
	scanf("%[^\n]",a);
	if(a[0]>='a' && a[0]<='z')
	{
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]>='a' && a[i]<='z')
			{
				a[i]=a[i]-32;
			}
		//	strupr(a);
		}
	}
	else
	{
		for(i=0;a[i]!='\0';i++)
		{
			if(a[i]>='A' && a[i]<='Z')
			{
				a[i]=a[i]+32;
			}
		}
		//strlwr(a);
	}
	printf("Your result:\n%s",a);
}
