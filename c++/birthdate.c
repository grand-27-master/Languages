/*	Kakade Vinayak T.
	MCA - 1
	Roll no : 20

	Write a program that input birthdate of a person and finds
	out age of the person in years, months and days as on today.*/
#include<stdio.h>
void main()
{
	int d1,d2,m1,m2,y1,y2,y3,m=0,month=0,year=0;
	int min=0,total=0,c=28,a=31,b=30,d=29,m3;

	printf("Enter BirthDate\n");
	printf("Enter First day : ");
	scanf("%d",&d1);
	printf("Enter First month : ");
	scanf("%d",&m1);	
	printf("Enter First year : ");	
	scanf("%d",&y1);

	printf("Enter CurrentDate\n");
	printf("Enter Second day : ");
	scanf("%d",&d2);
	printf("Enter Second month : ");
	scanf("%d",&m2);
	printf("Enter Second year : ");
	scanf("%d",&y2);
	
	printf("\n First Date is :");
	printf("%d/%d/%d",d1,m1,y1);

	printf("\n Second Date is :");
	printf("%d/%d/%d",d2,m2,y2);
	
	year=y2-y1;

	while(m1==m2 && y1==y2)
		{
		total=d2-d1;
		printf("%d",total);
		m1=m1+12;
		break;
		}
	
	if(y2>=y1)
	{
	if (m1==1 || m1==3 || m1==5 || m1==7 || m1==8 || m1==10 || m1==12)
		{
			total=a-d1;
			m++;
			m1++;
		}
	else if(m1==4 || m1==6 || m1==9 || m1==11)
		{
			total=b-d1;
			m++;
			m1++;
		}
	else if(m1==2)
		{
			if(y1%400==0 || (y1%4==0 && y1%100!=01))
				{
					total=d-d1;
					m++;
					m1++;
				}
			else
				{
					total=c-d1;
					m++;
					m1++;
				}
		}
	}
	
	while(y1<=y2)
		{
		y3=y1;
			if(y3==y2)
				{	
				m3=m2;
				}
		while(m1<=12)
		{
		if (m1==1 || m1==3 || m1==5 || m1==7 || m1==8 || m1==10 || m1==12)
			{
				if(y1==y2 && m1==m3)
						{
						total=a-d2;
						break;
						}
					total=total+a;
					m++;
					m1++;
			}
		else if(m1==4 || m1==6 || m1==9 || m1==11)
			{
			if(y1==y2 && m1==m3)
				{
					total=b-d2;
					break;
				}
				total=total+b;
				m++;
				m1++;	
			}
		else if(m1==2)
			{
			if(y3%400==0 || (y3%4==0 && y3%100!=0))
						{
						if(y1==y2 && m1==m3)
							{
							total=c-d2;
							break;
							}
						total=total+d;
						m++;
						m1++;
						}
			else
						{
						if(y1==y2 && m1==m3)
							{
							total=d-d2;
							break;
							}
						total=total+c;
						m++;
						m1++;
						}
			}
			
		}	
		month=month+m;
			m=0;
			m1=1;
			y1=y1+1;
		}
	printf("\n Age of Person in Days : ");
	printf("%d",total);
	printf("\n Age of Person in Month : ");
	printf("%d",month);
	printf("\n Age of Person in Year : ");
	printf("%d",year);
}
/*	OUTPUT
*/