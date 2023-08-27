#include <stdio.h>
#include <graphics.h>
#include <conio.h>
void main()
{
	int para[10]={0,0,100,0,110,50,10,50,0,0};
	int tri[8]={20,10,20,40,50,40,20,10};
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"c:\\turboc3\\bgi");
	
	//for paralleogram
	drawpoly(5,para);
	//for triangle
	setcolor(RED);
	drawpoly(4,tri);
	getch();
	closegraph();
}
