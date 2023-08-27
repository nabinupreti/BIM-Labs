//seperete odd and even intigers in separate array
#include<stdio.h>
void main()
{
	int n,a[100],odd[100],even[100],i,e=0,o=0;
	printf("How many elements do you want to enter:");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			even[e]=a[i];
			e++;
		}
		else
		{
			odd[o]=a[i];
			o++;
		}
	}
	printf("Even intigers are:\n");
	for(i=0;i<e;i++)
	{
		printf("%d\n",even[i]);
	}
	printf("Odd intigers are:\n");
	for(i=0;i<o;i++)
	{
		printf("%d\n",odd[i]);
	}
}
