#include <stdio.h>
void main()
{
	FILE *fp1,*fp2;
	fp1=fopen("Odd.dat","wb");
	fp2=fopen("Even.dat","wb");
	int num;
	printf("Enter a number:");
	scanf("%d",&num);
	if(num%2==0)
	{
		putw(num,fp2);
		printf("Successfully written %d in file Even.dat",num);
	}
	else
	{
		putw(num,fp1);
		printf("Successfully written %d in file Odd.dat",num);
	}
	fclose(fp1);
	fclose(fp2);
}
