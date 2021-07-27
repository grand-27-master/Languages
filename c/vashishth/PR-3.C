#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	clrscr();
	printf("\n enter value:");
	scanf("%d",&a);
	switch(a)
	{
		case 10:
		case 9:
		case 8:
		case 7:
			printf("\n distinction:");
			break;
		case 6:
			printf("\n first:");
			break;
		case 5:
			printf("\n pass:");
			break;
		default:
			printf("\n fail:");
			break;
	}
	getch();
}