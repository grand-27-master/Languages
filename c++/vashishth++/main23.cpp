#include <iostream>
#include<conio.h>
using namespace std;
template <class t1,class t2>class myclass
{
	t1 i;
	t2 j,c;
	public:
	void get();
	void put();
	t2 multi();	
};

template <class t1,class t2>
void myclass<t1,t2>::put()
{
	cout<<"\n\n answer="<<c;
}
template <class t1,class t2>
t2 myclass<t1,t2>::multi()
{
	c=i*j;
	return c;
}
int main()
{
	myclass<int,float>my;
	my.get();
	my.multi();
	my.put();
	return 0;
}
