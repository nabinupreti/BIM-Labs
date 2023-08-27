//It Does not run in Dev C++. 
#include <stdio.h>
#include <conio.h>
#include <graphics.h>
void main()
{
	int a[10]={80,40,120,100,300,100,80,40};
	int i;
	int driver = DETECT, mode;
	initgraph(&driver,&mode,"C://TURBOC3//BGI");
	printf("\n**********Hello Programmer!!!***************");
	setcolor(BLUE);
	//for triangle
	line(50,100,0,200);
	line(50,100,100,200);
	line(0,200,100,200);
//	alternative
	drawpoly(4,a);

//	for circle
	for(i=25;i<=100;i++)
	{
		circle(300,200,i);
		i+=24;
	}
	//for rectangle
	line(400,10,400,60);
	line(400,10,500,10);
	line(500,10,500,60);
	line(400,60,500,60);

	setcolor(RED);
	outtextxy(260,305,"Overlapped circle");
	outtextxy(10,205,"triangle");
	outtextxy(420,63,"Rectangle");
	getch();
	closegraph();
}
