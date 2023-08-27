#include <stdio.h>
void main()
{
	char line[100],i;
	printf("Enter a line:");
	gets(line);
	printf("Displaying only digit:\n");
	for(i=0;line[i]!='\0';i++)
	{
		if(line[i]>='0' && line[i]<='9')
		{
			printf("%c",line[i]);
		}
	}
}
