   /**********************************************************************************
                   NAME : BHATIYA KAMLESH R.
                   YEAR : 1.                   
                   SEM  : 2
                 PROGRAM: INFIX TO POSTFIX
  ***********************************************************************************/
#include<stdio.h>
int TOP=-1,ap=-1,rank=0;
char ans[20];
char stack[20];
char exp[20];
void precedence(char,char);
void insert_stack(char);
void insert_ans(char);
void main()
{
	int i=0;
	char ch=' ',s;
	printf("Enter infix notetion expression :");
	while(ch!='#')
	{
		ch=getchar();
		exp[i]=ch;
		i++;
	}
	exp[i]='\0';
	i=0;
	s='#';
	while(exp[i]!='\0')
	{
		if(exp[i]=='#' ||exp[i]=='+' || exp[i]=='-' ||exp[i]=='*' ||exp[i]=='/' ||(exp[i]>=65 &&exp[i]<=90 )||(exp[i]>=97 &&exp[i]<=122 ))
		{
			precedence(exp[i],s);
		}
	s=stack[TOP];
	i++;
	}
	ap++;
	ans[ap]='\0';

	if(rank==1)
	{
		printf("Postfix expression = %s\n",ans);
	}
	else
	{
		printf("Invalid expression !!!\n");
	}
}

void precedence(char e,char s)
{
	int pre,pre1;
	if(e=='#')
		pre=0;
	else if(e=='+' || e=='-')
		pre=1;
	else if(e=='*' || e=='/')
		pre=2;
	else if((e>=65 && e<=90) || (e>=97 && e<=122))
		pre=3;

	if(s=='#')
		pre1=0;
	else if(s=='+' || s=='-')
		pre1=1;
	else if(s=='*' || s=='/')
		pre1=2;
	else if((s>=65 && s<=90) || (s>=97 && s<=122))
		pre1=3;

	if(!(e=='#' && s=='#'))
	{
		if(pre>pre1)
		{
			insert_stack(e);
		}
		else
		{
			insert_ans(e);
		}
	}
}
void insert_stack(char e)
{
	TOP++;
	stack[TOP]=e;
}
void insert_ans(char e)
{
	char s;
	ap++;
	ans[ap]=stack[TOP];
	if((ans[ap]>=65 && ans[ap]<=90) || (ans[ap]>=97 && ans[ap]<=122))
	{
		rank=rank+1;
	}
	else
	{
		rank=rank-1;
	}
	TOP--;
	
	if(TOP<0)
		s='#';
	else
		s=stack[TOP];

		precedence(e,s);
}
/********************* OUT PUT ******************************
Enter infix notetion expression :a+b*c#
Postfix expression = abc*+
*************************************************************/