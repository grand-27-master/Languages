#include<stdio.h>
#include<conio.h>
main()
{
	FILE *fp;
	char name[10];
	int n;
	clrscr();
	fp=fopen(name,"wb");
	while(n!=-99)
	{
		printf("enter number:");
		scanf("%d",&n);
		putw(n,fp);
	}
	fclose(fp);
	fp=fopen(name,"rb");
	while((n=getw(fp))!=EOF)
	{
		printf("\n\n %d",n);
	}
	fclose(fp);

       getch();


}