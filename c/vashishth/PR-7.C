#include<stdio.h>
#include<conio.h>
void main()
{
	int sec,min,hr;
	clrscr();
	printf("enter value of second:");
	scanf("%d",&sec);
	hr=sec/3600;
	min=sec%3600/60;
	sec=sec%3600%60;
	printf("\n value of second=%d",sec);
	printf("\n value of minute=%d",min);
	printf("\n value of hour=%d",hr);
	getch();

}