//
#include<stdio.h>
void main()
{
	int y1,m1,d1,y2,m2,d2,y,m,d;
	printf("Enter your Date of Birth(dd/mm/yy):");
	scanf("%d%d%d",&d1,&m1,&y1);
	printf("Enter current date(dd mm yyyy):");
	scanf("%d%d%d",&d2,&m2,&y2);
	if((d1<1 || d1>32)||(d2<1 || d2>32)||(m1<1 || m1>12)||(m2<1 || m2>12)||(y1<1 || y2<1))
    {
    	printf("\t\tError!!.. You've entered wrong detail.");
	}
	else
	{
		if(d2>=d1){
			d=d2-d1;
		}
		else{
			m2--;
			d2+=30;
			d=d2-d1;
		}
		if(m2>=m1){
			m=m2-m1;
		}
		else{
			y2--;
			m2+=12;
			m=m2-m1;
		}
		y=y2-y1;
		printf("Your age is:\n");
		printf("%dYear \t%dMonth \t%ddays ",y,m,d);
	}
}
