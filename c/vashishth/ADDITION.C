#include<stdio.h>
#include<conio.h>
main()
{
	int rno[10],i,amt=0,n;
	clrscr();
	printf("enter value:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{
		printf("\n enter value of rno[%d]:",i);
		scanf("%d",&rno[i]);
	}
	for(i=1;i<n;i++)
	{

		amt=amt+rno[i];
	 }
	printf("\n amt is:%d",amt);
	 getch();





}