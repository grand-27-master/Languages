#include<iostream>  //overload '==' operator
using namespace std;
class over
{
	int a;
	public:
		void get()
		{
			cout<<"enter a=";
			cin>>a;
		}
		void operator ==(over o2 /*explicit object*/)
		{
			if(a==o2.a)
			cout<<"both  are equal";
			else
			cout<<"\nunequal";
		}
};
int main()
{
	over o1,o2;
	o1.get();
	o2.get();
	o1==o2;
	return 0;
}
