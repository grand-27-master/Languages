/*	Kakade Vinayak T.
	MCA-1
	Roll No - 20 
	
	Write a program that concates two string without using inbuilt function.*/
#include<stdio.h>
void main()
{
	char str1[50],str2[50],str3[50];
	int i=0,k=0,j=0;

	printf("Enter your first string :");
	scanf("%s",&str1);
	printf("Enter your first string :");
	scanf("%s",&str2);

	while(str1[i]!='\0')
		{
		str3[k]=str1[i];
		i++;
		k++;
		}

	while(str2[j]!='\0')
		{
		str3[k]=str2[j];
		j++;
		k++;
		}

	str3[k]='\0';

	printf("Concate String is = %s \n",str3);
}