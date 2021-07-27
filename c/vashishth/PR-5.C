//swaping using third variable//
#include<stdio.h>
#include<conio.h>
void main()
{       int x,y,z;
	clrscr();
	printf("value of x=");
	scanf("%d",&x);
	printf("value of y=");
	scanf("%d",&y);
	z=x;
	x=y;
	y=z;
	printf("\n  x=%d",x);
	printf("\n y=%d",y);


	getch();

}