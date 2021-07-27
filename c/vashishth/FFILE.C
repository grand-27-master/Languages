#include<stdio.h>
#include<conio.h>
main()
{
	FILE *fp;
	char name[10],sname[10];
	int n;
	clrscr();
	printf("enter your name:");
	gets(name);
	fp=fopen(name,"w");
	flushall();
	printf("\n enter number:");
	scanf("%d",&n);
	fprintf("\n\n name is %s \n\n number is=%d",name,n);
	fclose(fp);
	fp=fopen(name,"r");
	fscanf(fp,"\n\n %s \n\n %d",&sname,&n);
	printf("\n\n your name is:%s\n\n your no is=%d",name,n);
	fclose(fp);
	getch();







}
