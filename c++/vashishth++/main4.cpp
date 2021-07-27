#include <iostream>
using namespace std;
class box
{
	public:
	void add(int a,int b)
	{
		int c=a+b;
		cout<<"your answer="<<c;
	}	
};
class box1:public box
{
	public:
	void sub(int a,int b)
	{
		add(a,b);
		int c=a-b;
		cout<<"\n\n your answer ="<<c;
	}	
};
class box2:public box1
{
	public:
	void mul(int a,int b)
	{	
	sub(a,b);
	int c=a*b;
	cout<<"\n\n answer is="<<c;
	}
};
class box3:public box2
{
	public:
	void div(int a,int b)
	{
		mul(a,b);
		int c=a/b;
		cout<<"\n\n answer is="<<c;
	}
};
int main()
{
	box3 h;
	h.div(5,5);
	return 0;
}
