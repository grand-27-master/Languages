/*	Kakade Vinayak T.
	MCA-1
	Roll No - 20 
	
	Write a program that convert roman number to decimal number.*/
#include<stdio.h>
void main()
{
	int no=0;
	char ch;

	printf("Enter any Roman to convert into Decimal : ");

	do{
       scanf("%c",&ch); 
	   if(ch=='M')
		{
		   no=no+1000;
		}
	   if(ch=='D')
		{
		   no=no+500;
		}
	   if(ch=='C')
		{
		   no=no+100;
		}
	   if(ch=='L')
		{
		   no=no+50;
		}
	   if(ch=='X')
		{
		   no=no+10;
		}
	   if(ch=='IX')
		{
		   no=no+9;
		}
	   if(ch=='V')
		{
		   no=no+5;
		}
	   if(ch=='IV')
		{
		   no=no+4;
		}
	   if(ch=='I')
		{
		   no=no+1;
		}
	}while(ch!=' ');
	printf("Decimal is %d",no);
	printf("\n");
}