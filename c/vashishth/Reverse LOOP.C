#include<stdio.h>
#include<conio.h>
main()
{
	int i,j,n,k;
	clrscr();
       //	printf("enter value:");
      //	scanf("%d",&n);
	for(i=0;i<8;i++)
	{
		for(j=8;j>i;j--)
		{
			k=i;
			k++;
			printf("%d\t",k);
		}
	   printf("\n");
       }
       getch();


}