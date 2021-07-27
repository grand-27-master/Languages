#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\n enter a:");
	scanf("%d",&a);
	if(a>=65 && a<=90)
	{
		printf("\n capital letters:%c",a);
	}
	else if(a>=97 && a<=122)
	{
		printf("\n small letters:%c",a);
	}
	else if(a>=48 && a<=57)
	{
		printf("\n it is a number:%c",a);
	}

	getch();

}