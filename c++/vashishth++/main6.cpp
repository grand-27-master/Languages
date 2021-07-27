#include <iostream>
using namespace std;
class box
{
	private:
	int a;
	public:	
	box()
	{
		a=0;
	}
	box(int x)
	{
		a=x;
	}
	box(box &b)
	{
		a=b.a;
	}
	void putdata()
	{
		cout<<"a="<<a;
	}
};
int main()
{
	int i=100;
	box h;
	box h1(i);
	box h3(h1);
	h1.putdata();
	h3.putdata();
	return 0;
}
