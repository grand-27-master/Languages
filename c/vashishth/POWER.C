#include<stdio.h>
#include<conio.h>
double pow();
void main()
{
	double ans;
	clrscr();
	ans=pow();
	printf("\n\n x power y=%.2lf",ans);
	getch();
}
double pow()
{
	double i,x,y,sum=1;
	printf("\nenter value of first number=");
	scanf("%lf",&x);
	printf("\n enter value of second number=");
	scanf("%lf",&y);
	for(i=1;i<=y;i++)
	{
	       sum=sum*x;
	}
	return sum;
}