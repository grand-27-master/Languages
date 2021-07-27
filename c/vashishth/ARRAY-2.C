#include<stdio.h>
#include<conio.h>
int main()
{
      int rno[10],i,j,n,k;
      printf("enter array elements:");
      scanf("%d",&n);
      for(i=0;i<n;i++)
      {
		printf("\n rno[%d]:",i);
		scanf("%d",&rno[i]);
      }
      for(i=0;i<n;i++)
      {
		printf("\n rno[%d]:%d",i,rno[i]);
      }
      for(i=0;i<n;i++)
      {
	 for(j=i+1;j<n;j++)
	 {
		if(rno[i]<=rno[j])
		{
			k=rno[i];
			rno[i]=rno[j];
			rno[j]=k;
		}
	  }
    }
    printf("\n sorted array:\n");
    for(i=0;i<n;i++)
    {
	printf("\n rno[%d]=%d",i,rno[i]);
    }
    for(i=0;i<n;i++)
      {
	 for(j=i+1;j<n;j++)
	 {
		if(rno[i]>=rno[j])
		{
			k=rno[i];
			rno[i]=rno[j];
			rno[j]=k;
		}
	  }
    }
    printf("\n asending sorted array:\n");
    for(i=0;i<n;i++)
    {
	printf("\n rno[%d]=%d",i,rno[i]);
    }
    return 0;

}
