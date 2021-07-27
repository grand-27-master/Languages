#include<stdio.h>
#include<conio.h>
int cnt(int n);
void main()
{
	int n,dig1;
	clrscr();
	printf("enter value:");
	scanf("%d",&n);
	dig1=cnt(n);
	printf("\n\n %d",dig1);
	getch();
}
int cnt(int n)
{
	int i,cnt=0,dig,sum=0;
	for(i=n;i>0;i=i/10)
	{
		dig=i%10;
		sum=sum+dig;
		printf("\n no of digits=%d",dig);
		cnt++;
	}
	 return sum;
}
