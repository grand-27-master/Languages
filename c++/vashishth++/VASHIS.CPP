#include<stdio.h>
#include<conio.h>
using namespace std;
int disp();
int main()
{
	int ans;
	ans=disp();
	printf("answer=%d",ans);
	getch();
}

int disp()
{
	int i,n,sum=1;
	printf("enter value:");
	scanf("%d",&n);
	for(i=n;i>=1;i--)
	{
		sum=sum*i;
	}
	return sum;
}
