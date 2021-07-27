#include<stdio.h>
#include<conio.h>
 int main()
{
	int rno[10],i,n,min;
	printf("enter array value:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter rno[%d]:",i);
		scanf("%d",&rno[i]);
	}
	min=rno[0];
	for(i=0;i<n;i++)
	{

		printf("\n rno[%d]:%d",i,rno[i]);
		if(min>=rno[i])
		{
	       min=rno[i];
		}
	}
	printf("\n min value=%d",min);

    return 0;
}
