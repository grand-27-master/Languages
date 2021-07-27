/*#include<stdio.h>
#include<conio.h>
void add(int a,int b);
void sub(int a,int b);
void multi(int a,int b);
void div(int a,int b);
void disp(int i);
void main()
{
	int c,d,n,i;
	clrscr();
	printf("enter first value:");
	scanf("\n %d",&c);
	printf("enter second value:");
	scanf("\n %d",&d);
	printf("enter value:");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			add(c,d);
			break;
		case 2:
			sub(c,d);
			break;
		case 3:
			multi(c,d);
			break;
		case 4:
			div(c,d);
			break;
		case 5:
			disp(c);
			break;
	}

       getch();

}
void add(int a,int b)
{
	int p;
	p=a+b;
	printf("\n\n your answer=%d",p);
 }
void sub(int a, int b)
{
	int p;
	p=a-b;
	printf("\n\n your answer=%d",p);
}
void multi(int a ,int b)
{
	int p;
	p=a*b;
	printf("\n\n your answer=%d",p);
}
void div(int a,int b)
{
	int p;
	p=a/b;
	printf("\n\n your answer=%d",p);
}
void disp(int j)
{
	int i,n,k;
       //	printf("enter value:");
       //	scanf("%d",&n);
	for(i=0;i<7;i++)
	{
		for(j=7;j>i;j--)
		{
			k=i;
			k++;
			printf("\t%d",k);
		}
	    printf("\n");
	 }
 }*/
 
/*#include<stdio.h> //(area of circle)
#include<conio.h>
void area();
int main()
{
	area();
	return 0;
}
void area()
{
	float r,ar;
	printf("enter radius=");
	scanf("%f",&r);
	ar=3.14*r*r;
	printf("\n area=%.2f",ar);
}*/

#include<stdio.h> //(addition using function)
#include<conio.h>
//void add();
int add();
int main()
{
	int sum;
	//int a,b,c;
	//printf("enter a=");
	//scanf("%d",&a);
	//printf("\n enter b=");
	//scanf("%d",&b);
	//printf("\n c=%d",c);
	sum=add();
	printf("\n sum=%d",sum);
	return 0;
}
//void add()
int add()
{
	int a,b,c;
	printf("enter a=");
	scanf("%d",&a);
	printf("\n enter b=");
	scanf("%d",&b);
	//c=a+b;
	return a+b;
	//printf("\n c=%d",c);
	//return c;
	//return 0;
}
