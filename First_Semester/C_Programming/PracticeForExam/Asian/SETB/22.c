#include <stdio.h>
#include <graphics.h>
#include <conio.h>
void main()
{
	int a[15]={0,0,200,0,210,100,10,100,0,0};//for paralleogram
	int b[10]={50,5,80,90,20,190,50,5};//for triangle
	int gd = DETECT , gm;
	initgraph(&gd,&gm,"c://turboc3//bgi");
	drawpoly(5,a);
	drawpoly(4,b);
	circle(150,50,30);
	getch();
	closegraph();
}
