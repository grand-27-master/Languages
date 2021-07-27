/*	Kakade Vinayak T.
	MCA-1
	Roll No - 20 
	
	Write a program that counts number of lines, words and characters from a file.*/
#include<stdio.h>
void main()
{
	FILE *fp1;
	int i;
	char ch;
	int word=0,break_ch=0,character=0,line=1;
	int k;

	printf("Enter DATA into the file\n");
	
	fp1=fopen("count.txt","w");
	
	for(i=1;i<=50;i++)
		{
		scanf("%c",&ch);
		if(ch=='$') 
			break;
		fprintf(fp1,"%c",ch);
		}

	fclose(fp1);

	fp1=fopen("count.txt","r");

	for(i=1;i<=50;i++)
		{
		fscanf(fp1,"%c",&ch);
		k=ch;
		if(k==10)
			{
			line++;
			word++;
			character--;
			}

		if(ch!='$') 
			{
			if(ch==' ' || ch==',' || ch==';' || ch=='.' || ch=='!' || ch=='?')
				{
				if(break_ch)
				{
					continue;
				}
				else	
				{
					word++;
					break_ch=1;
				}
				}
			else
				{
				character++;
				break_ch=0;
				}
			}
		else
			break;
		}

	printf("\n word : %d",word);
	printf("\n character : %d",character);
	printf("\n line : %d",line);

	fclose(fp1);
	
	}
