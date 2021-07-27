/*	Kakade Vinayak T.
	MCA-1
	Roll No - 20
	
	Write a program that reads and compare two strings with the help of pointers only.*/
#include<stdio.h>
void main()
{
	char str1[20],str2[20],*ptr1,*ptr2;
	int flag=0;

	ptr1=str1;
	ptr2=str2;
	
	printf("Enter First:");
	scanf("%s",ptr1);
	printf("Enter Second:");
	scanf("%s",ptr2);
	
	while(*ptr1)
	{
		if(*ptr1!=*ptr2)
		{
			flag=1;
			break;
		}
		ptr1++;
		ptr2++;
	}

	if(*ptr2!=0)
		flag=1;
	
	if(flag==0)
		printf("Both string are Compared.");
	else
		printf("Both string are Not Compared.");
	
}