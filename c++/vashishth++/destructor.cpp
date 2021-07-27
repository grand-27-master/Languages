#include<iostream>
using namespace std;
class sample
{
	int a,b;
	public:
		sample()
		{
			cout<<"enter a value=";
			cin>>a;
			cout<<"\nenter b value=";
			cin>>b;
		}
		~sample()
		{
			cout<<"\n value of a="<<a;
			cout<<"\nvalue of b="<<b;
		}
};
int main()
{
	sample s;
	return 0;
}
