//a,a2/2,a3/3,.................
#include <stdio.h>
void main()
{
	int i,n,sum,a;
	printf("Enter value of n:");
	scanf("%d",&n);
	printf("Enter value of a:");
	scanf("%d",&a);
	printf("\nSeries upto %dth term:",n);
	for(i=1;i<=n;i++)
	{
		sum=(a*i)/i;
		printf("%d, ",sum);
	}
}
