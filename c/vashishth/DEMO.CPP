/*#include<iostream.h> (my first c++ programme)
#include<conio.h>
int main()
{
	int n,a,b;
	cout<<"enter value of a:";
	cin>>a;
	cout<<"\n\n\n\n enter value of b:";
	cin>>b;
	n=a+b;
	cout<<"\n\n\n\n\n total="<<n;
	return 0;


}*/

/*#include<stdio.h> (negation of total value)
#include<conio.h>
int main()
{
	int a,b,c,d;
	printf("enter value of a=");
	scanf("%d",&a);
	printf("\n enter value of b=");
	scanf("%d",&b);
	c=a+b;
	d=~c;
	printf("total value=%d",d);
	return 0;
}*/

/*#include<stdio.h> (a basic if-else programme)
#include<conio.h>
int main()
{
	int a;
	printf("enter a=");
	scanf("%d",&a);
	if(a>=18)
	{
		printf("you are an adult");
	}
	else
	{
		printf("you are a child");
	}
	return 0;
}*/

/*#include<stdio.h> (swapping of 2 variables)
#include<conio.h>
int main()
{
	int a,b,x,y;
	printf("enter a=");
	scanf("%d",&a);
	printf("\n enter b=");
	scanf("%d",&b);
	x=b;
	y=a;
	printf("\n new value of a=%d",x);
	printf("\n new value of b=%d",y);
	return 0;
}*/

/*#include<stdio.h> (swapping without 3rd variable)
#include<conio.h>
int main()
{
	int a,b;
	printf("enter a=");
	scanf("%d",&a);
	printf("\n enter b=");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("\n new value of a=%d",a);
	printf("\n new value of b=%d",b);	
	return 0;
}*/

/*#include<stdio.h> (pattern using loop) 
#include<conio.h>
int main()
{
	int i,j,n;
	printf("enter rows=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n");
		for(j=1;j<=i;j++)
		{
			printf("*");
		}
	}
	return 0;
}*/

/*#include<stdio.h> (switch case)
#include<stdlib.h>
int main()
{
	int a,b,c;
	printf("enter a=");
	scanf("%d",&a);
	printf("\n enter b=");
	scanf("%d",&b);
	printf("\n enter the case:");
	scanf("%d",&c);
	switch(c)
	{
		case 1:
			c=a+b;
			break;
		case 2:
			c=a-b;
			break;
		case 3:
			c=a*b;
			break;
		case 4:
			c=a/b;
			break;					
	}
	printf("\n value of c=%d",c);	
	return 0;
}*/

/*#include<stdio.h> //(array)
#include<conio.h>
int main()
{
	int n,i,max;
	char rno[10];
	printf("enter no. of students=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n enter rollno[%d]:",i);
		scanf("%d",&rno[i]);
	}
	max=rno[0];
	for(i=1;i<=n;i++)
	{
		printf("\n rno[%d]:%d",i,rno[i]);
		if(max<=rno[i])
		{
			max=rno[i];
		}
	}
	printf("\n max rno=%d",max);
	return 0;
}*/

/*#include<stdio.h> //(sort)
#include<conio.h>
int main()
{
	int n,i,j,k;
	char rno[10];
	printf("enter no. of students=");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("\n enter rollno[%d]:",i);
		scanf("%d",&rno[i]);
	}
	for(i=1;i<=n;i++)
	{
		printf("\n rno[%d]:%d",i,rno[i]);	
	}
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=n;j++)
		{
			if(rno[i]<=rno[j])
			{
				k=rno[i];
				rno[i]=rno[j];
				rno[j]=k;
			}
		}
	}
	printf("\n array 1 :");
	for(i=1;i<=n;i++)
	{
		printf("\n rno[%d]:%d",i,rno[i]);	
	}
	for(i=1;i<=n;i++)
	{
		for(j=i+1;j<=i;j++)
		{
			if(rno[i]>=rno[j])
			{
				k=rno[i];
				rno[i]=rno[j];
				rno[j]=k;
			}
		}
	}
	printf("\n array 2:");
	return 0;
}*/

/*#include<stdio.h>
#include<conio.h> //(string)
#include<string.h>
int main()
{
	int l1,l2,l3;
	char fnm[10],snm[10],tnm[10];
	printf("enter first name:");
	scanf("%s",&fnm);
	printf("\nenter second name:");
	scanf("%s",&snm);
	printf("\nenter third name:");
	scanf("%s",&tnm);
	l1=strlen(fnm);
	printf("\nlenght=%d",l1);
	l2=strlen(snm);
	printf("\nlenght=%d",l2);
	l3=strlen(tnm);
	printf("\nlenght=%d",l3);
	strcpy(fnm,snm);
	printf("\ncopied string:%s",fnm);
	strcat(snm,tnm);
	printf("\n concated string:%s",snm);
	printf("\nupper cased string:%s",strupr(tnm));
	return 0;
}*/

/*#include<stdio.h>
#include<conio.h> //(factorial)
int fact(int);
int main()
{
	int n;
	printf("enter number=");
	scanf("%d",&n);
	printf("\n factorial=%d",fact(n));
	return 0;
}
int fact(int n)
{
	//public:
		//int n;
		if(n==0 || n==1)
		{
			return 1;
		}
		else
		{
			return n*fact(n-1);
		}
}*/


/*#include<stdio.h> //(equilateral triangle)
#include<conio.h>
int main()
{
	int n,i,j,k;
	printf("enter rows=");
	scanf("%d",&n);
	for(i=1;i<n+1;i++)
	{
		printf("\n");
		for(j=1;j<(n-i)+1;j++)
		{
			printf(" ");
		}
		for(k=1;k<i+1;k++)
		{
			printf(" *");
		}
	}
	return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,i,j,k[10][10];
	printf("enter rows=");
	scanf("%d",&r);
	printf("\n enter columns=");
	scanf("%d",&c);
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			printf("\n enter k[%d][%d]:",i,j);
			scanf("%d",&k[i][j]);
		}
	}
	for(i=1;i<=r;i++)
	{
		for(j=1;j<=c;j++)
		{
			printf("\n %d",k[i][j]);
		}
	}
	return 0;	
}*/

/*#include<iostream> (oop-1)
using namespace std;
class func
{
	public:
	void add(int a,int b)
	{
		cout<<"enter first number=";
		cin>>a;
		cout<<"enter second number=";
		cin>>b;
		cout<<"total="<<a+b;
	}
	void sub(int a,int b)
	{
		cout<<"\nenter first number=";
		cin>>a;
		cout<<"\nenter second number=";
		cin>>b;
		cout<<"\ndifference="<<a-b;
	}
	void mult(int a,int b)
	{
		cout<<"\nenter first number=";
		cin>>a;
		cout<<"\nenter second number=";
		cin>>b;
		cout<<"\nproduct="<<a*b;
	}	
	void div(int a,int b)
	{
		cout<<"\nenter first number=";
		cin>>a;
		cout<<"\nenter second number=";
		cin>>b;
		cout<<"\ndivision="<<a/b;
	}	
		
};
int main()
{
	func f;
	int a,b;
	f.add(a,b);
	f.sub(a,b);
	f.mult(a,b);
	f.div(a,b);
	return 0;
}*/

/*#include<iostream> (oop-2)
using namespace std;
class i1 
{
	public:
	void add(int a,int b,int i)
	{
		for(i=1;i<=3;i++)
		cout<<"\ntotal="<<a+b;
	}	
};
class i2:public i1
{
	public:
	void sub(int a,int b,int i)
	{
		for(i=1;i<=3;i++)
		cout<<"\ndifference="<<a-b;
	}	
};
int main()
{
	i2 p;
	int a,b,i;
	cout<<"enter first number=";
	cin>>a;
	cout<<"\nenter second number=";
	cin>>b;
	p.add(a,b,i);
	p.sub(a,b,i);
	return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
struct emp
{
	int eno;
	char ename[10];
	float esal;	
};
int main()
{
	struct emp e;
	int eno,char ename[10],float esal;
	printf("\t\t EMPLOYEE DETAILS");
	printf("\nenter employee number=");
	scanf("%d",&eno);
	printf("\nenter employee name:");
	scanf("%c",&ename);
	printf("\nenter employee salary=");
	scanf("%f",&esal);
	printf("\nemployee number=%d",e.eno);
	printf("\nemployee name:%c",e.ename);
	printf("\nemployee salary=%f",e.esal);
	return 0;
}*/

/*#include<stdio.h> //(addition of pointers)
#include<conio.h>
int main()
{
	int a,b;
	int *r,*p,*q;
	p=&a;
	q=&b;
	printf("enter value of a=");
	scanf("%d",&a);
	printf("\nenter value of b=");
	scanf("%d",&b);
	//printf("\nvalue of first pointer=%d",*p);
	//printf("\nvalue of second pointer=%d",*q);
	*r=(*p)+(*q);
	printf("\ntotal=%d",*r);
	return 0;
}*/

/*#include<stdio.h>
#include<conio.h>
int main()
{
	int n,ans;
	printf("enter number=");
	scanf("%d",&n);
	ans=fact(n);
	printf("factorial=%d",ans);
	return 0;
}
int fact(int n)
{
	int ans;
	if(n==0)
	{
		ans=1;
	}
	else
	{
		ans=n*fact(n-1);
	}
	return ans;
}*/

/*#include<iostream>
using namespace std;
class student
{
	private:
		int id;
		char name[10];
		float age;
	public:
		void get();
		void put();	 
};
void student::get()
{
	cout<<"enter student name:";
	cin>>name;
	cout<<"\n enter student id-";
	cin>>id;
	cout<<"\n enter student age=";
	cin>>age;
}
void student::put()
{
	cin<<"\nstudent name:"<<name;
	cin<<"\nstudent id-"<<id;
	cin<<"\nstudent age="<<age;
}
int main()
{
	student stu;
	stu.get();
	stu.put();
	return 0;
}*/

/*#include<iostream> (reference variable)
using namespace std;
int main()
{
	int a=10, &b=a;
	cout<<"original value of a="<<a;
	cout<<"\noriginal value of b="<<b;
	a=20;
	cout<<"\nnew value of a="<<a;
	cout<<"\nnew value of b="<<b;
	return 0;
}*/

/*#include<iostream> (class intro)
using namespace std;
class student
{
	private:
		int id;
		char name[10];
	public:
	void get()
	{
		cout<<"enter student id-";
		cin>>id;
		cout<<"\nenter student name:";
		cin>>name;
	}	
	void put()
	{
		cout<<"\nstudent id is-"<<id;
		cout<<"\nstudent name is:"<<name;
	}
};

int main()
{
	student stu;
	stu.get();
	stu.put(); 
	return 0;
}*/

#include<iostream>
using namespacec std;
int main()
{
	return 0;
}
