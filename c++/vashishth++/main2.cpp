//inheritance//
#include <iostream>
using namespace std;
class box
{
	public:
	void add(int a,int i,int h)
	{
		int ans=a+h;
		for(i=1;i<=5;i++)
		{
			cout<<"\n\n answer="<<ans;
		}
	}	 	
};
class box1:public box
{
	public:
	void sub(int g)
	{
		int ans=g-5;
		cout<<"\n\n answer1="<<ans;
	}	
};
class box2:public box1
{
	public:
	void mul(int c)
	{
		int ans=c*5;
		cout<<"\n\n answer2="<<ans;
	}	
};
class box3:public box2
{
	public:
	void div(int d)
	{
		int ans=d/5;
		cout<<"\n\n answer3="<<ans;
	}	
};
int main()
{
	box3 b3;
	int a,h,i;
	cout<<"Enter Value:";
	cin>>a;
	cout<<"\n\n enter value:";
	cin>>h;
	b3.add(a,i,h);
	b3.sub(7);
	b3.mul(1);
	b3.div(5);
	return 0;
}
