//largest number in 1-D array using pointer
#include <stdio.h>
void main()
{
	int height[20],i,lar;
	int *p=height;
	printf("Enter elments in array:");
	for(i=0;i<5;i++)
	{
		scanf("%d",(p+i));
	}
	lar=*(p);
	for(i=0;i<5;i++)
	{
		if(*(p+i)>lar)
		{
			lar=*(p+i);
		}
	}
	printf("Largest number = %d",lar);
}
