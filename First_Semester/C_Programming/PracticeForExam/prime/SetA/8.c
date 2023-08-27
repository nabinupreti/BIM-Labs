#include <stdio.h>
void main()
{
	int n,i;
	char ch;
	FILE *fp,*fp1,*fp2;
	fp = fopen("data.txt","w+");
	fp1 = fopen("vowels.txt","w");
	fp2 = fopen("consonants.txt","w");
	printf("Enter how many character you want to enter:");
	scanf("%d",&n);
	printf("Enter %d characters:",n);
	for(i=0;i<n;i++)
	{
		scanf(" %c",&ch);
		fputc(ch,fp);
	}
	rewind(fp);
//	ch=fgetc(fp);
//	while(!feof(fp))
	while((ch=fgetc(fp))!=EOF)
	{
		if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
		{
			fputc(ch,fp2);
		}
		else
		{
			fputc(ch,fp1);
		}
//		ch=fgetc(fp);
	}
	printf("Successfully written vowel and consonant letters in file.");
	
}
