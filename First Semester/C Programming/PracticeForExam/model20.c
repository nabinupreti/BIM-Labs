#include <stdio.h>
void main()
{
	FILE *fp1,*fp2,*fp3;
	fp1=fopen("number.dat","wb+");
	fp2=fopen("positive.dat","wb+");
	fp3=fopen("negative.dat","wb+");
	int num,i;
	printf("Enter 5 number:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&num);
		putw(num,fp1);	
	}
	rewind(fp1);
	while ( (num = getw(fp1)) != EOF )
   {
      if(num>0)
      {
      	putw(num,fp2);
	  }
	  else
	  {
	  	putw(num,fp3);
	  }
   }
   rewind(fp2);
   rewind(fp3);
   printf("Content of positive.txt:\n");
	while ( (num = getw(fp2)) != EOF )
	{
		printf("%d\n",num);
    }
	printf("Content of negative.txt:\n");
	while ( (num = getw(fp3)) != EOF )
	{
		printf("%d\n",num);
	}
	fclose(fp1);
	fclose(fp2);
	fclose(fp3); 
}
