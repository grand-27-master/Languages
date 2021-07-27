#include<stdio.h>
#include<conio.h>
main()
{
	int i,n,ans=1;
	clrscr();
	printf("enter value:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
	     ans=ans*i;
	}
	printf("\n ans is :%d",ans);
	getch();


}