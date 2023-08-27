//search a number inputtd by usre in array
//display array in reverse order
#include <stdio.h>
void main()
{
	int n,a[100],i,tosearch,flag=0;
	printf("How many elements do you want to enter:");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Enter a number you want to search:");
	scanf("%d",&tosearch);
	for(i=0;i<n;i++)
	{
		if(a[i]==tosearch)
		{
			flag=1;
			break;
		}
	}
	if(flag==1)
	{
		printf("Number found.");
	}
	else
	{
		printf("Number not found");
	}
}
