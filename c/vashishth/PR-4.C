#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,c,ans;
	clrscr();
	printf("enter value of a:");
	scanf("%d",&a);
	printf("enter value of b:");
	scanf("%d",&b);
	printf("\n 1.addition\n 2.subtraction\n 3.multiplication\n4.division\n enter ur choice:");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			ans=a+b;
			printf("\naddition:%d",ans);
			break;
		case 2:
			ans=a-b;
			printf("\nsubtraction:%d",ans);
			break;
		case 3:
			ans=a*b;
			printf("\nmultiplication:%d",ans);
			break;
		case 4:
			ans=a/b;
			printf("\n divison:%d",ans);
			break;
	       default:
			printf("invalid");
	}
	 getch();
}
