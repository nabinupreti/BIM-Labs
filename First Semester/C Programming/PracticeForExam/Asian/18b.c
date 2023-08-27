#include <stdio.h>
void main()
{
	int i,upper=0,lower=0;
	char a[200];
	printf("Enter a line: ");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]>='A' && a[i]<='Z')
		upper++;
		else if(a[i]>='a' && a[i]<='a')
		lower++;
	}
	printf("NO. of calptal letter = %d\n",upper);
	printf("NO. of small letter = %d\n",lower);
	
}
