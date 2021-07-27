#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,i,j,k[10][10],cnt=0;
	printf("enter row:");
	scanf("%d",&r);
	printf("enter column:");
	scanf("%d",&c);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			printf("\n k[%d][%d]:",i,j);
			scanf("%d",&k[i][j]);
		}

	 }
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
		    printf(" %d ",k[i][j]);
		}
	   printf("\n");
	 }
	 if(r==c)
	 {
	  for(i=1;i<=r;i++)
	    {
		for(j=1;j<=c;j++)
		{
		    if(i==j && k[i][j]==1 || i!=j && k[i][j]==0)
		    {
		       cnt++;
		    }
		}

	    }
	    if((r*c)==cnt)
	    {
	      printf("\n its an identity matrix");
	    }
	    else
	    {
	     printf("\n its not an identity matrix");
	    }
	 }
	 else
	 {
	  printf("\n row & col not same so identity matrix not possible:");
	 }
	return 0;

}
