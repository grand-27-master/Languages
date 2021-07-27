#include<iostream>
#include<conio.h>
using namespace std;
template <class t1>class sample
{
t1 x,y,z;
public:
	void put();
	void get();
	void add();
	t1 minval(t1 a,t1 b); 	
};
template<class t1>
void sample<t1>::get()
{
	cout<<"enter value of x:";
	cin>>x;
	cout<<"\n\n enter value of y:";
	cin>>y;
} 
template<class t1>
void sample <t1>::put()
{
	cout<<"\n\n sum="<<z;
}
template<class t1>
void sample <t1>::add()
{
	z=x+y;
}
template<class t1>
t1 sample<t1>::minval(t1 x,t1 y)
{
	return(x<y?x:y);
} 
int main()
{
	sample<int>s1;
	sample<double>s2;
	sample<float>s3;
	s1.put();
	s1.get();
	s1.add();
	s2.get();
	s2.add();
	s2.put();
	s3.get();
	s3.add();
	s3.put();
	cout<<"\n\n min int value="<<s1.minval(22,16);
	cout<<"\n\n min double value="<<s2.minval(123456,54232);
	cout<<"\n\n min float value="<<s3.minval(23.34,76.65);
	return 0;
}
