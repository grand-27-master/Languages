#include<conio.h>
#include<stdio.h>
main()
{
	int i,j,n,k;
	printf("enter value:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		k=i;
		for(j=1;j<=i;j++)
		{
			printf("%d\t",k);
			k++;
		}
	    printf("\n");
	}
      getch();

}
