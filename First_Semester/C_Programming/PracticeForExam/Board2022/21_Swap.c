#include <stdio.h>
void swap(float* , float*);
void main()
{
	float a,b;
	printf("Enter two numbers:");
	scanf("%f%f",&a,&b);
	printf("Before Swap:\nNum1 = %f \nNum2 = %f\n",a,b);
	swap(&a,&b);
	printf("After Swap:\nNum1 = %f \nNum2 = %f\n",a,b);
}
void swap(float *x, float *y)
{
	float temp;
	temp=*x;
	*x=*y;
	*y=temp;
}
