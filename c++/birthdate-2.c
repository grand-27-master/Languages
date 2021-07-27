/*	Kakade Vinayak T.
	MCA - 1
	Roll no : 20
	
	Write a program that accepts age of a person in years,
	months and days and finds out birthdate of the person.
*/

# include <stdio.h>
void main ()
{
	int m,d,y,m1,d1,y1;
	int m2,d2,y2;

	printf ("Enter Today Day : ");
	scanf ("%d",&d);

	printf ("Enter Today Month : ");
	scanf ("%d",&m);

	printf ("Enter Today Year : ");
	scanf ("%d",&y);

	printf ("Enter Day : ");
	scanf ("%d",&d1);

	printf ("Enter Month : ");
	scanf ("%d",&m1);

	printf ("Enter Year : ");
	scanf ("%d",&y1);

	y2=y-y1;

	if (m<m1)
	{
		m2=12-m+m1;
		if(m2==0);
		{
			m2=12;
		}
	}
	else
	{
		m2=m-m1;
		if(m2==0);
		{
			m2=12;
		}
	}
	
	if (m==3)
	{
		if ((y2%4==0 && y2%4==100) || (y2%400==0))
		{
			if (d<d1)
			{		
				d2=29+d-d1;
				m2-=1;
			}
			else
				d2=d-d1;
		}
		else
		{
			if (d<d1)
			{			
				d2=28+d-d1;
				m2-=1;
			}
			else
				d2=d-d1;
		}
	}
	else
	if (m==1 || 4 || 6 || 8 || 9 || 11 || 2)
	{
			if (d<d1)
			{			
				d2=31+d-d1;
				m2-=1;
			}
			else
				d2=d-d1;
		}
	else
	if (m==5 || 7 || 10 || 12)
	{
			if (d<d1)
			{			
				d2=30+d-d1;
				m2-=1;
			}
			else
				d2=d-d1;
		}

	printf ("Birth date is : %d-%d-%d\n",d2,m2,y2);
}	
	

/*
----------------------------- OUTPUT ---------------------------------
Enter Today Day : 10
Enter Today Month : 10
Enter Today Year : 2006
Enter Day : 18
Enter Month : 1
Enter Year : 22
Birth date is : 23-8-1984
----------------------------------------------------------------------
*/

