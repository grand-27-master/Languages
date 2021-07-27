#include <iostream>
#include<conio.h>
using namespace std;
template <class t1> class array
{
	t1 a[10];
	public:
	void put();
	void sort();
	void get();	
};
template <class t1>
void array<t1>::get()
{
	int i;
	for(i=1;i<=3;i++)
	{
	cout<<"enter a["<<i<<"]=";
	cin>>a[i];
	}
}
template <class t1>
void array<t1>::put()
{
	int i;
	for(i=1;i<=3;i++)
	{
		cout<<"\n\n a["<<i<<"]="<<a[i];
	}
}
template <class t1>
void array<t1>::sort()
{
	int temp,i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1+i;j<=3;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
int main()
{
	array<int>a1;
	array<float>a2;
	a1.get();
	a1.sort();
	a1.put();
	a2.get();
	a2.sort();
	a2.put();
	return 0;
}
