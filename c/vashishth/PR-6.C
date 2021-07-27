//swaping without using third variable//
#include<stdio.h>
#include<conio.h>
void main()
{       int x,y;
	clrscr();
	printf("value of x=");
	scanf("%d",&x);
	printf("value of y=");
	scanf("%d",&y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\n  x=%d",x);
	printf("\n y=%d",y);


	getch();

}