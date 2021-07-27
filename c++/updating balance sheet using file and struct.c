/*	Kakade Vinayak T.
	MCA-1
	Roll No - 20 
	
	Structure of bank client as follows:
	struct client{
					int clientno;
					char name[10];
					float balance;
				 };
	Write a program that stores client data in a file and allows to update 
	balance of a client according to transaction.*/
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
typedef struct
{
	int clientno;
	char name[10];
	float balance;
}client;

void main()
{
	client c;
	FILE *f;
	int y=1,no;

	f=fopen("cli.txt","w+");

	if(!f)
		printf("Error in hadling a file.");
	else
	{
		printf("Enter Client Data\n");
		while(y==1)
		{
			printf("Enter Client No : ");
			scanf("%d",&c.clientno);
			printf("Enter Client Name : ");
			scanf("%s",&c.name);
			printf("Enter Client Balance: ");
			scanf("%f",&c.balance);
		
			fwrite(&c,sizeof(client),1,f);
		
			printf("Do You Want to Add more data press 1/0 [yes:1.no:0] : ");
			scanf("%d",&y);
		}
	}
	rewind(f);

	while(feof(f)==0)
	{
		fread(&c,sizeof(client),1,f);
		printf("\n%d",c.clientno);
		printf("\t%s",c.name);
		printf("\t%.2f",c.balance);
	}
	printf("\n\nEnter client number to update balance :");
	scanf("%d",&no);

	fseek(f,sizeof(client)*(no-1),SEEK_SET);
	
	printf("Enter Client No : ");
	scanf("%d",&c.clientno);
	printf("Enter Client Name : ");
	scanf("%s",&c.name);
	printf("Enter Client Balance: ");
	scanf("%f",&c.balance);
		
	fwrite(&c,sizeof(client),1,f);

	rewind(f);

	while(feof(f)==0)
	{
		fread(&c,sizeof(client),1,f);
		printf("\n%d",c.clientno);
		printf("\t%s",c.name);
		printf("\t%.2f",c.balance);
	}

	fclose(f);
}