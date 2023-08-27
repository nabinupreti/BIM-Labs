#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,add,sub,mul,mod;
float div;
//clrscr();
printf("Enter two numbers:");
scanf("%d%d",&a,&b);
add=a+b;
sub=a-b;
div=(float)a/b;
mul=a*b;
mod=a%b;
printf("");
printf("Sum of %d and %d is %d\n",a,b,add);
printf("Difference of %d and %d is %d\n",a,b,sub);
printf("Multiplication of %d and %d is %d\n",a,b,mul);
printf("Dibision of %d and %d is %.2f\n",a,b,div);
printf("Modolus of %d and %d is %d",a,b,mod);
getch();
}
