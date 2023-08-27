//find cube of a number using function
//no argument but return type
#include <stdio.h>
int cube();
int cube()
{
	int n;
	printf("Enter a number:");
	scanf("%d",&n);
	return (n*n*n);
}
void main()
{
	printf("Cube root is %d",cube());
}
