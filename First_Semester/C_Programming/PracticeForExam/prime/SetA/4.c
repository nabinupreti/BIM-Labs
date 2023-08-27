#include <stdio.h>
void main()
{
	int num,count=0,i;
	FILE *fp;
	fp=fopen("numbers.txt","w+");
	printf("Enter 5 numbers:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&num);
		putw(num,fp);
	}
	rewind(fp);
	printf("Odd numbers are:\n");
	while((num=getw(fp))!=EOF)
	{
		if(num%2!=0)
		{
			printf("%d\n",num);
			count++;
		}
	}
	printf("\nNo. of Occurance of odd no is %d",count);
}
