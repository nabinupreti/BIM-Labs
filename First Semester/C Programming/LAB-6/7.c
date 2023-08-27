//replacing "an" word with "##"
#include <stdio.h>
void main()
{
	char a[100];
	int i;
	printf("Enter a line:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'){
			if(a[i+1]=='n'){
				if(a[i+2]==' '||a[i+2]=='\0'){
					a[i]='#';
					a[i+1]='#';
				}
			}
		}
	}
	printf("Result is: \n%s",a);
}
