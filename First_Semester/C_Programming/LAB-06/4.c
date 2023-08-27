//count vowel and consonants
#include  <stdio.h>
void main()
{
	char a[299];
	int i,v=0,c=0;
	printf("Enter a sentence/word:");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' '){
			continue;
		}
		else if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
		{
			v++;
		}
		
		else{
			c++;
		}
	}
	printf("There are %d vowel and %d consonants.",v,c);
}
