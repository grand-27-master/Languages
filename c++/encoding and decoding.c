/*	Kakade Vinayak T.
	MCA - 1
	Roll no : 20
	
	Write a program that performs encoding and decoding on user choice.
	Use following symbols irrespective of case.
		A  =  ~	B   = {	C  =  $	D  =  %	E  =  `	F  =  ^	G  =  _
		H  =  &	I  =  !	J  =  *	K  =  >	L  =  :	M  =  ?	N  =  +
		O  =  @	P  =  /	Q  =  1	R  =  ,	S  =  2	T  =  =	U  =  #
		V  =  7	W  =  " X  =  9	Y  =  |	Z  =  ]
*/

# include <stdio.h>
void main ()
{
	char str[50];
	int i,j;

	printf ("Enter The String : ");
	scanf ("%s",&str);

	i=0;
	while (str[i]!='\0')
	{
		i++;
	}

	j=0;
	while (i>j)
	{
		if (str[j]=='A'||str[j]=='a')
		{
			str[j]='~';
			j++;
		}
		else
		if (str[j]=='B'||str[j]=='b')
		{
			str[j]='{';
			j++;
		}
		else
		if (str[j]=='C'||str[j]=='c')
		{
			str[j]='$';
			j++;
		}
		else
		if (str[j]=='D'||str[j]=='d')
		{
			str[j]='%';
			j++;
		}
		else
		if (str[j]=='E'||str[j]=='e')
		{
			str[j]='`';
			j++;
		}
		else
		if (str[j]=='F'||str[j]=='f')
		{
			str[j]='^';
			j++;
		}
		else
		if (str[j]=='G'||str[j]=='g')
		{
			str[j]='_';
			j++;
		}
		else
		if (str[j]=='H'||str[j]=='h')
		{
			str[j]='&';
			j++;
		}
		else
		if (str[j]=='I'||str[j]=='i')
		{
			str[j]='!';
			j++;
		}
		else
		if (str[j]=='J'||str[j]=='j')
		{
			str[j]='*';
			j++;
		}
		else
		if (str[j]=='K'||str[j]=='k')
		{
			str[j]='>';
			j++;
		}
		else
		if (str[j]=='L'||str[j]=='l')
		{
			str[j]=':';
			j++;
		}
		else
		if (str[j]=='M'||str[j]=='m')
		{
			str[j]='?';
			j++;
		}
		else
		if (str[j]=='N'||str[j]=='n')
		{
			str[j]='+';
			j++;
		}
		else
		if (str[j]=='O'||str[j]=='o')
		{
			str[j]='@';
			j++;
		}
		else
		if (str[j]=='P'||str[j]=='p')
		{
			str[j]='/';
			j++;
		}
		else
		if (str[j]=='Q'||str[j]=='q')
		{
			str[j]='1';
			j++;
		}
		else
		if (str[j]=='R'||str[j]=='r')
		{
			str[j]=',';
			j++;
		}
		else
		if (str[j]=='S'||str[j]=='s')
		{
			str[j]='2';
			j++;
		}
		else
		if (str[j]=='T'||str[j]=='t')
		{
			str[j]='=';
			j++;
		}
		else
		if (str[j]=='U'||str[j]=='u')
		{
			str[j]='#';
			j++;
		}
		else
		if (str[j]=='V'||str[j]=='v')
		{
			str[j]='7';
			j++;
		}
		else
		if (str[j]=='W'||str[j]=='w')
		{
			str[j]='"';
			j++;
		}
		else
		if (str[j]=='X'||str[j]=='x')
		{
			str[j]='9';
			j++;
		}
		else
		if (str[j]=='Y'||str[j]=='y')
		{
			str[j]='|';
			j++;
		}
		else
		if (str[j]=='Z'||str[j]=='z')
		{
			str[j]=']';
			j++;
		}
	}

	printf ("%s\n",str);
}


