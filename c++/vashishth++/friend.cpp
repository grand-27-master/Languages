#include<iostream>
using namespace std;
class test2;  //forward declaration
class test1  //container class
{
	int a,b;
	public:
		void get()
		{
			cout<<"enter value of a=";
			cin>>a;
			cout<<"\nenter value of b=";
			cin>>b;
		}
		friend class test2;
};
class test2 //contained class
{
	public:
		void put(test1 t1)
		{
			cout<<"\na="<<t1.a<<"\nb="<<t1.b;
		}
};
int main()
{
	test1 t1;
	test2 t2;
	t1.get();
	t2.put(t1);
	return 0;
}
