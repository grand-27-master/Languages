#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b;
	clrscr();
	printf("value of a:");
	scanf("%d",&a);
	printf("value of b:");
	scanf("%d",&b);
	if(a==0)
	{
		printf("you lose");
	}
	else if(b==1)
	{
		printf("you win");
	}
	else
	{
		printf("tie");
	}


	getch();
}
