#include <iostream>
using namespace std;
class number
{
	private:
		int n;
	public:
	number()
	{
		n=0;
	}
	void get()
	{
		cout<<"\n enter number=";
		cin>>n;
	}	
	void put()
	{
		cout<<"\n number ="<<n;
	}
	void operator ++()
	{
		n++;
	}
};
int main()
{
	number no;
	no.get();
	no.put();
	no.operator ++();
	no.put();
	return 0;
}
