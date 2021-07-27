/*#include<stdio.h> (using for loop)
#include<conio.h>
int main()
{
	int a,b,remainder;
	printf("enter dividend=");
	scanf("%d",&a);
	printf("\n enter divisor=");
	scanf("%d",&b);
	for(remainder=a%b;remainder!=0;remainder=a%b)
	{
		a=b;
		b=remainder;
	}
	printf("\n GCD= %d",b);
	return 0;
}*/

/*#include<stdio.h> (using while loop)
#include<conio.h>
int main()
{
	int a,b,remainder;
	printf("enter dividend=");
	scanf("%d",&a);
	printf("\n enter divisor=");
	scanf("%d",&b);
	remainder=a%b;
	while(remainder!=0)
	{
		a=b;
		b=remainder;
		remainder=a%b;
	}
	printf("\n GCD= %d",b);
	return 0;
}*/

#include<stdio.h> //(using do-while loop)
#include<conio.h>
int main()
{
	int a,b,remainder;
	printf("enter dividend=");
	scanf("%d",&a);
	printf("\n enter divisor=");
	scanf("%d",&b);
	remainder=a%b;
	do
	{
		a=b;
		b=remainder;	
		remainder=a%b;
	}
	while(remainder!=0);
	printf("\n GCD= %d",b);
	return 0;
}

