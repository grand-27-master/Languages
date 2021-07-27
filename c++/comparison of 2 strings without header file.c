/*	Kakade Vinayak T.
	MCA-1
	Roll No - 20 
	
	Write a program that compare two string without using inbuilt function.*/
#include<stdio.h>
void main()
{
	char str1[50],str2[50];
	int i=0,k=0,j=0,flag=0;

	printf("Enter first string :");
	scanf("%s",&str1);
	printf("Enter second string :");
	scanf("%s",&str2);

	while(str1[i]!='\0' || str2[j]!='\0')
		{
		if(str1[i] == str2[j])
			{
			i++;
			j++;
			}
		else
			{
			flag=1;
			break;
			}
		}

	if(flag)
		printf("String is not compared.");
	else
		printf("String is compared.");
}