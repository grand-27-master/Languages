#include<stdio.h>
#include<conio.h>
#define MAXSUB 10
#define MAXSTU 10
struct student
{
	int n;
	char name[15],grade;
	int sub[MAXSUB];
	float avg;
	int total;
};
void data(struct student s,int n);
void main()
{
	struct student  s1[MAXSTU],s2;
	int i,j,nsub,nstu,max;
	clrscr();
	printf("enter no of subjects:");
	scanf("%d",&nsub);
	printf("\n\n enter no of students:");
	scanf("%d",&nstu);
	for(i=1;i<=nstu;i++)
	{
		s1[i].total=0;
		printf("\n\n your number[%d]:",i);
		scanf("%d",&s1[i].n);
		flushall();
		printf("\n\n your name[%d]:",i);
		gets(s1[i].name);
			for(j=1;j<=nsub;j++)
			{
				printf("\n\n enter marks of subject[%d]:",j);
				scanf("%d",&s1[i].sub[j]);
				s1[i].total=s1[i].sub[j];
			}
	 }
	 s1[i].avg=(float)s1[i].total/nsub;


	 getch();

}