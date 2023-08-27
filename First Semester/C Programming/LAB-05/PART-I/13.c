//count total nummber of positive element in array
#include <stdio.h>
void main()
{
	int n,a[100],i,even=0,odd=0;
	printf("How many elements do you want to enter:");
	scanf("%d",&n);
	printf("Enter %d elements:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%2==0)
		{
			even++;
		}
		else{
			odd++;
		}
	}
	printf("NO. of Even intiger is %d.\n",even);
	printf("NO. of Odd intiger is %d.",odd);

}
