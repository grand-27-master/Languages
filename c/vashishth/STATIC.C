#include<stdio.h>
#include<conio.h>
void disp();
void main()
{
	clrscr();
	disp();
	disp();
	disp();
	disp();
	disp();
	getch();
}
void disp()
{
	static int n=0;
	printf("\n\n n=%d",n);
	n++;
}
