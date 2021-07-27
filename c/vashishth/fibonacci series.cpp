#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,a=0,b=1,c;
	printf("enter the number=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n%d",a);
		c=a+b;
		a=b;
		b=c;
	}
	return 0;
}



