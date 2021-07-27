#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,*p,*q,*r;
	p=&a;
	q=&b;
	printf("enter value of a=");
	scanf("%d",&a);
	printf("\n\n enter value of b=");
	scanf("%d",&b);
	*r=*p+*q;
	printf("\n\n total=%d",*r);
	return 0;
}
