#include <stdio.h>
void main()
{
	int a[10],i,n=5,b[10];
	printf("enter %d numbers: \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	FILE *fp;
	fp=fopen("block.txt","w+");
	fwrite(&a,sizeof(a),1,fp);
	
	rewind(fp);
	printf("Content of file are:\n");
	fread(&b,sizeof(b),1,fp);
	for(i=0;i<n;i++)
	{
		printf("%d\n",b[i]);
	}
	fclose(fp);
}
