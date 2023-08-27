//count no.of word and display each word in new line
#include  <stdio.h>
void main()
{
	char a[299];
	int i,w=1;
	printf("Enter a sentence:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		printf("%c",a[i]);
		if(a[i]==' '){
			printf("\n");
			w++;
		}
	}
	printf("\There are %d words in given sentene.",w);
}
