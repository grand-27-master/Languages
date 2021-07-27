/*	Kakade Vinayak T.
	MCA-1
	Roll No - 20 
	
	Write a program that separate out a substring from given position
	to the given length from a string.*/
#include<stdio.h>
void main()
{
	int i=0,j=0,found=0,a=0,b=0;
	char str1[15],str2[15];

	printf("Enter first string :");
	scanf("%s",&str1);
	printf("Enter find string :");
	scanf("%s",&str2);

	while(str1[i]!='\0')
		{
		if (str2[j]==str1[i])
			{

			j++;
			i++;
			if(str2[j]=='\0')
				{
				b=i;
				a=b-(j-1);
				found=1;
				break;
				}
			}
		else
			{
			if((j != 0) && (!found))
				{
				j=0;
				i=i-2;
				}
			i++;
			found=0;
			}
		}
	if(found) 
		{
		printf("\n found ");
		printf(" Start form %d to %d in First String \n",a,b);
		}
	else
		printf("not found");
	

}