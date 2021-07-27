/*	Kakade Vinayak T.
	MCA-1
	Roll No - 20 
	
	Write a program that reverse the input  string without using any other string variable.*/
#include<stdio.h>
char str[20];

void main()
{
	void strrev(int);
	int i=0;

	printf("Enter string:");
	scanf("%s",str);
	strrev(i);

}
void strrev(int i)
{
	if(str[i]==0)
		return;
	strrev(i+1);
	printf("%c",str[i]);
}

