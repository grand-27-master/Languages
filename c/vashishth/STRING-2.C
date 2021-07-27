#include<stdio.h>
#include<conio.h>
#include<string.h>
main()
{
	char fnm[15],snm[15],tnm[20];
	int l1,l2,k;
	printf("enter first name:");
	scanf("%s",&fnm);
	printf("enter second name:");
	scanf("%s",&snm);
	l1=strlen(fnm);
	printf("\n lenght of first name=%d",l1);
	l2=strlen(snm);
	printf("\n lenght of second name:%d",l2);
	strcpy(tnm,fnm);
	printf("\n copied string:%s",tnm);
	strcat(tnm,snm);
	printf("\n concated string:%s",tnm);
	k=strcmp(fnm,snm);
	if(k==0)
	{
		printf("\n both strings are equal");
	}
	else if(k<0)
	{
		printf("\n first string is more than second");
	}
	else
	{
		printf("\n second is more than first string");
	}
	printf("\n concated string:%s",strrev(tnm));
	printf("\n convert string to upper case:%s",strupr(tnm));
	printf("\n convert string to lower case:%s",strlwr(tnm));
	getch();

}
