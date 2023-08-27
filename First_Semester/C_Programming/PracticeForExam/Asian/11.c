#include <stdio.h>
void main()
{
	int l,b,area;
	FILE *fp;
	fp=fopen("rectangle.txt","w");
	printf("Enter two sides of rectangle:");
	scanf("%d%d",&l,&b);
	area=l*b;
//	putw(area,fp);
	fprintf(fp,"%d",area);
	printf("Success, area of rectangle is written in file.");
	fclose(fp);
}
