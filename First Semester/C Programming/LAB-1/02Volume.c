#include<stdio.h>
#include<conio.h>
void main()
{
int h,w,l,v;
clrscr();
printf("Enter height, Width and Length of box:");
scanf("%d%d%d",&h,&w,&l);
v=h*w*l;
printf("Volume of box is %d",v);
getch();
}