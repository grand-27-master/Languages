/*#include<stdio.h> (right triangle)
#include<conio.h>
int main()
{
	int n,i,j;
	printf("enter rows=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}*/

/*#include<stdio.h> (square)
#include<conio.h>
int main()
{
	int n,i,j;
	printf("enter rows=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=(n-1)+i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}*/

/*#include<stdio.h> (rectangle)
#include<conio.h>
int main()
{
	int n,i,j;
	printf("enter rows=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=i;j<=i+n;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	return 0;
}*/

/*#include<stdio.h> (parallelogram)
#include<conio.h>
int main()
{
	int n,j,i,k;
	printf("enter number of rows=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=n-i;j>=1;j--)
		{
			printf(" ");
		}
		for(k=1;k<=(2*n)+1;k++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}*/
