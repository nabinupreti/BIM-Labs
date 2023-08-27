//WAP to read n integer and check whether they are pailwise relatively prime or not.
#include <stdio.h>
#include <conio.h>
int prp(int[],int);
int gcd(int,int);
void main()
{
	int i,a[10],n,res;
	printf("How many integer to check pairwise relatively prime:");
	scanf("%d",&n);
	printf("Enter %d integers:",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	res=prp(a,n);
	if(res)
		printf("They are pairwise relatively prime.");
	else
		printf("They are not PRP.");
	getch();	
}
int prp(int a[],int n)
{
	int i,j;
	int rs = 1;
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(gcd(a[i],a[j])!=1)
			{
				rs = 0;
				break;
			}
		}
		if(rs==0)
			break;
	}
	return(rs);
}
int gcd(int a,int b)
{
	int r;
	while(b>0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	return(a);
}
