//Quadartic equation
#include<stdio.h>
#include<math.h>
void eqn(float ,float ,float );
void main (){
   float x,y,z;
   printf("enter the values of a b c: ");
   scanf("%f%f%f",&x,&y,&z);
   eqn(x,y,z);
}
void eqn(float a,float b,float c)
{
	float r1,r2,d;
	d=b*b - 4*a*c;
   	if(d>0)
	{
	   r1 = (-b+sqrt(d)) / (2*a);
	   r2 = (-b-sqrt(d)) / (2*a);
	   printf("The real roots = %.3f and %.3f",r1,r2);
	}
	else
	{
		printf("Roots are imiginary.");
	}	
}

