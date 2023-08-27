//replacing all vowel by "*"

#include  <stdio.h>
void main()
{
	char a[299];
	int i;
	printf("Enter a sentence/word:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
			a[i]='*';
		}
	}
	printf("Required Result :\n");
	puts(a);
}
