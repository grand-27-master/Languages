#include<stdio.h>
#include<conio.h>
void main()
{
	FILE *fp;
	char name[10],ch;
	int words,alphabets,lines,dig;
	clrscr();
	printf("enter name:");
	gets(name);
	fp=fopen(name,"w");
	while((ch=getchar())!=EOF)
	{
		putc(ch,fp);
	}
	fclose(fp);
	fp=fopen(name,"r");
	while((ch=getc(fp))!=EOF)
	{
		printf("%c",ch);
		if(ch==32)
		{
			words++;
		}
		else if(ch>=65 && ch<=122)
		{
			alphabets++;
		}
		else if(ch>=48 && ch<=57)
		{
			dig++;
		}
		else if(ch='\n')
		{
				lines++;
		}
	}
	fclose(fp);
		printf("number of lines=%d",lines);
		printf("number of digits=%d",dig);
		printf("number of alphabets=%d",alphabets);
		printf("number of words=%d",words);

	getch();
}