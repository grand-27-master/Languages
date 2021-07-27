#include<stdio.h>
#include<conio.h>
//#define MAXSTU 10
//#define MAXSUB 10
struct employee
{
	int rno;
	char name[10];
	int sub[5];
	float avg;
	int total;
	char ch;
};
void main()
{
	struct employee e[10];
	int i,j,nstu,nsub;
	clrscr();
	printf("\n enter number of subject:");
	scanf("%d",&nsub);
	printf("\n\n  enter number of students:");
	scanf("%d",&nstu);
	for(i=1;i<=nstu;i++)
	{
	       e[i].total=0;
		printf("\n enter your roll no[%d]:",i);
		scanf("%d",&e[i].rno);
		flushall();
		printf("\n enter your name[%d]:",i);
		gets(e[i].name);
		for(j=1;j<=nsub;j++)
		{
			printf("\n enter sub[%d]:",j);
			scanf("%d",&e[i].sub[j]);
		       e[i].total=e[i].total+e[i].sub[j];
		}
		e[i].avg=(float)e[i].total/nsub;
		if(e[i].avg>=70 && e[i].avg<=100)
		{
			e[i].ch='A';
		}
		else if(e[i].avg>=60 && e[i].avg<50)
		{
		       e[i].ch='B';
		}
		else if(e[i].avg>=50 && e[i].avg<40)
		{
			e[i].ch='C';
		}
		else
		{
			e[i].ch='D';
		}
	}
       for(i=1;i<=nstu;i++)
	{
		printf("\n\n\n roll no[%d]:%d",i,e[i].rno);
		flushall();
		printf("\n\n\n name[%d]:%s",i,e[i].name);
		for(j=1;j<=nsub;j++)
		{
			printf("\n\n\n sub[%d]:%d",i,e[i].sub[j]);
		}
		printf("\n\n total[%d]:%d",i,e[i].total);
		printf("\n\n avg[%d]:%.2f",i,e[i].avg);
		printf("\n\n grade[%d]:%c",i,e[i].ch);

	}
	getch();
}
