#include<stdio.h>
#include<conio.h>
main()
{
	FILE *fp;
	int i,n=0;
	char nm[10];
	clrscr();
	printf("enter name:");
	gets(nm);
	fp=fopen(nm,"w");
	if(fp==NULL)
	{
		printf("invalid name:");
		goto exit;
	}
	for(i=10;i<=100;i=i+10)
	{
		putw(i,fp);
		n=getw(fp);
		if(ferror(fp))
		{
			printf("\n\n error");
			goto exit;
		}
	 }
	 fclose(fp);
	 fp=fopen(nm,"r");
	 for(i=0;i<20;i++)
	 {
		n=getw(fp);
		if(feof(fp))
		{
			printf("\n\n done");
			goto exit;
		 }
		 printf("\n\n %d",n);
	 }
	 fclose(fp);
	 exit:
	 getch();



}
