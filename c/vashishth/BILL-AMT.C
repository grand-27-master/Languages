#include<stdio.h>
#include<conio.h>
void main()
{
	float unit,amt;
	clrscr();
	printf("\n enter units:");
	scanf("%f",&unit);
	if(unit<=100)
	{
	  amt=unit*0.60;
	}
	else if(unit>100 && unit<=300)
	{
	  amt=(unit-100)*0.90+60;
	}
	else if(unit>300)
	{
	  amt=(unit-300)*1.20+60+180;
	}

	printf("\n bill amt=%.2f",amt);
	getch();
}