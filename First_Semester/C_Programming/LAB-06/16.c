#include<stdio.h>
#include<string.h>
void main()
{
	int i,j,n;
	char str[10][50],temp[50];
	printf("Enter how many words you want to enter:\n");
	scanf("%d",&n);
	printf("Enter %d strings :",n);
	for(i=0;i<n;i++)
	{
		//gets(str[i]);
		scanf(" %[^\n]",str[i]);
	}
	for(i=0;i<n-1;i++)
	{

		for(j=i+1;j<n;j++)
		{
			if(strcmp(str[i],str[j])>0)
			{
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp);
			}
		}
	}	
	printf("\nIn alphabetical order:\n");
	for(i=0;i<n;i++)
	{
		puts(str[i]);
	}
}

