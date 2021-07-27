//destructor//
#include <iostream>
using namespace std;
class temp
{
	private:
	int a;
	public:
	temp()
	{
		a=4;
		cout<<"\n\n constructor=";
	}	
	~temp()
	{
		cout<<"\n\n destructor";
	}
	void put()
	{
		cout<<a;
	}
};
int main() 
{
	temp t,t1;
	t.put();
	t1.put();
	
	return 0;
}
