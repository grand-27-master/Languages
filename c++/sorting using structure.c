/*	Kakade Vinayak T.
	MCA-1
	Roll No - 20 
	
	create structure containing name and phone number. Write a program
	o sort and search that data name and number on user choice.*/
#include<stdio.h>
#include<string.h>

struct emp
		{
		char name[20][20];
		char telephone[20][20];
		};
void main()
{
	struct emp e;
	char str[20],num[20],tmp[20];
	int i,j,n,flag=0;

	printf("Enter the number of Persons:");
	scanf("%d",&n);

	printf("Enter name and telephone numbers: \n\n");

	for(i=0;i<n;i++)
		{
		scanf("%s %s",&e.name[i],&e.telephone[i]);
		}
	
	for(i=1;i<=n-1;i++)
		{
		for(j=1;j<=n-i;j++)
			{
			if(strcmp(e.name[j-1],e.name[i])>0)
				{
				strcpy(tmp,e.name[j-1]);
				strcpy(e.name[j-1],e.name[j]);
				strcpy(e.name[j],tmp);

				strcpy(tmp,e.telephone[j-1]);
				strcpy(e.telephone[j-1],e.telephone[j]);
				strcpy(e.telephone[j],tmp);
				}
			}
		}

	printf("\nList of Persons and his Phonenumber is sorted\n\n");

	for(i=0;i<n;i++)
		{
		printf("%-20s\t%-10s\n",e.name[i],e.telephone[i]);
		}

	printf("\nEnter the name of Person to find his Number :");
	scanf("%s",&str);

	for(i=0;i<n;i++)
		{
		if(strcmp(e.name[i],str)==0)
			{
			flag=1;
			break;
			}
		else
			{
			flag=0;
			}
		}

	if(flag)
		printf("%s\t%s\n",e.name[i],e.telephone[i]);
	else
		printf("Sorry! Please enter valid name.");

	printf("Enter telephone number to find person name :");
	scanf("%s",&num);

	for(i=0;i<n;i++)
		{
		if(strcmp(e.telephone[i],num)==0)
			{
			flag=1;
			break;
			}
		else
			{
			flag=0;
			}
		}

	if(flag)
		printf("%s\t%s\n",e.telephone[i],e.name[i]);
	else
		printf("Sorry! Please enter valid number.");
}