//leap year or not
#include<stdio.h>
void main()
{
	int yr;
	printf("Enter a year:");
	scanf("%d",&yr);
	if(yr%4==0){
		if(yr%100==0){
			if(yr%400==0){
				printf("LEAP YEAR");
			}
			else{
				printf("NOT LEAP YEAR");
			}
		}
		else{
			printf("LEAP YEAR");
		}
	}
	else{
		printf("NOT LEAP YEAR");
	}
}
