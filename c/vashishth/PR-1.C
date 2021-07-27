#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,d;
	 clrscr();
	printf("value of a:");
	scanf("%d",&a);
	 printf("value of b:");
	scanf("%d",&b);
	printf("select:\n0.subtract\n1.division\n");
	printf("enter value:");
	scanf("%d",&c);
	if(c==0)
	{
	d=a-b;
	printf("ans=%d",d);
	}
	else if(c==1)
	{
	d=a/b;
	printf("ans=%d",d);
	}
	else
	{
	 printf("null");
	}

	getch();

}