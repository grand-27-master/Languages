/*	Kakade Vinayak T.
	MCA-1
	Roll No - 20 
	
	Write a program that finds prime number that also palindrome. */
#include<stdio.h>
#include<math.h>
void main()
{
	int no,no1=2,flag=1,tmp,dig,sum=0;
	float sqr;

	printf("Enter number to check prime and also palindrom : ");
	scanf("%d",&no);

	tmp=no;
	sqr=ceil(sqrt(no));

	while((no1<=sqr)&&(flag))
	{
		if(no%no1==0)
		{
			flag=0;
		}
		no1++;
	}
	while(no>0)
	{
		dig=no%10;
		no=no/10;
		sum=(sum*10)+dig;
	}

	if(flag)
	{
		printf("Prime ");
		if(sum==tmp)
			printf("and Palindrom Both.");
		else
			printf("and But Not Palindrom.");
	}
	else
	{
		printf("Not Prime ");
		if(sum==tmp)
			printf("But Palindrom.");
		else
			printf("and Not Palindrom.");
	}
}