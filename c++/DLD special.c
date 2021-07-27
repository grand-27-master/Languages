/*	Kakade Vinayak T.
	MCA-1
	Roll No - 20 
	
.	Write a menu driven program that converts hexadecimal 
	number to decimal ,octal and binary number.*/
#include<stdio.h>
#include<math.h>
#include<string.h>

void main()
{
	int len,c,rem,choice;
	long int dec,sub,bin,oct,temp;
	char hex[10];

	while(1)
	{
	printf("\nHEXADECIMAL CONVERSION\n");
	printf("\n1: FOR HEXA TO DECIMAL.");
	printf("\n2: FOR HEXA TO BINARY.");
	printf("\n3: FOR HEXA TO OCTAL.");
	printf("\n4: FOR EXIT.");
	printf("\nEnter choice : ");
	scanf("%d",&choice);

	switch(choice)
		{
			case 1:
				{
				len=0,c=0,rem=0,dec=0,sub=0;
	//				char hex[10];

				printf("Enter the Hexadecimal value=");
				scanf("%s",hex);

				len=strlen(hex);
				sub=len-1;

				while(sub>=0)
					{
						if(hex[sub]>=48 && hex[sub]<=57)
							rem=hex[sub]-48;
						else
							{
							hex[sub]=toupper(hex[sub]);
							rem=hex[sub]-55;
							}
						dec=dec+(rem*pow(16,c));
						sub--;
						c++;

				   }
				printf("\n  Decimal value is %ld",dec);
				break;
				}
			case 2:
				{
				len=0,c=0,rem=0,dec=0,sub=0,bin=0,temp=1;
				//char hex[10];

				printf("Enter the Hexadecimal value=");
				scanf("%s",hex);

				len=strlen(hex);
				sub=len-1;
				while(sub>=0)
					{
					if(hex[sub]>=48 && hex[sub]<=57)
						rem=hex[sub]-48;
					else
						{
						hex[sub]=toupper(hex[sub]);
						rem=hex[sub]-55;
						}
					dec=dec+(rem*pow(16,c));
					sub--;
					c++;
					}
					
				while(dec>0)
					{
					rem=dec%2;
					bin=bin+(rem*temp);
					temp=temp*10;
					dec=dec/2;
					}
				printf("\n Binary value is %ld",bin);
				break;
				}
			case 3:
				{
				len=0,c=0,rem=0,dec=0,sub=0,oct=0,temp=1;
				//char hex[10];

				printf("Enter the Hexadecimal value=");
				scanf("%s",hex);

				len=strlen(hex);
				sub=len-1;
				while(sub>=0)
					{
					if(hex[sub]>=48 && hex[sub]<=57)
						rem=hex[sub]-48;
					else
						{
						hex[sub]=toupper(hex[sub]);
						rem=hex[sub]-55;
						}
					dec=dec+(rem*pow(16,c));
					sub--;
					c++;
					}
				while(dec>0)
					{
					rem=dec%8;
					oct=oct+(rem*temp);
					temp=temp*10;
					dec=dec/8;
					}
				printf("\n Octal value is %ld",oct);
				break;
				}
			case 4: 
				{
					exit(0);
					break;
				}
		}
	}

}