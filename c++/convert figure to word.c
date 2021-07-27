/*	Kakade Vinayak T.
	MCA-1
	Roll No - 20 
	
	Write a program that concates two string without using inbuilt function.*/
	/* Write a program that converts figure in to words.	
   INPUT 1122334 
   OUTPUT: Elevenlack Twentytwothousand Threehundread Thirtyfour*/

#include<stdio.h>
void main()
{
	int amt,no,n1,m,a,i=0;

	int a1[10]={10000000,100000,1000,100,1};
	
	char s1[25][25]={"one","two","three","four","five","six","seven","eignt","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eightneen","nineteen"};
	char s2[25][25]={"twenty","thirty","fouty","fifty","sixty","seventy","eighty","ninety"};
	char s3[25][25]={"carore","lacks","thousand","hundred"};

	printf("Enter amount :");
	scanf("%d",&amt);

	no=amt;
	while(amt!=0)
	{
		a=a1[i];
		no=no/a;
		m=no;	
		n1=no;
		if(n1>=20 && n1<=99)
			{
			n1=n1/10;
			printf("%s",s2[n1-2]);
			no=no-(n1*10);
			if(no==0)
				printf("%s",s3[i]);
			}
		if(no!=0)
			{
			printf("%s",s1[no-1]);
			printf("%s",s3[i]);
			}
		amt=amt-(m*a);
		no=amt;
		i++;
		printf(" ");
	}
printf("Rupees Only..... ");
}