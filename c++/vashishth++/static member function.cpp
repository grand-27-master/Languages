#include<iostream>
using namespace std;
class test
{
	public:
	static void read()
		{
			static int x;
			cout<<"enter value=";
			cin>>x;
			cout<<"\nvalue="<<x;
		}
};
int main()
{
	test::read();
	return 0;
}
