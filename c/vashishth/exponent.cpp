#include<iostream>
using namespace std;
int main()
{
	int a,b,i,pow=1;
	cout<<"enter base=";
	cin>>a;
	cout<<"\nenter power=";
	cin>>b;
	for(i=1;i<=b;i++)
	{
		pow=pow*a;
	}
	cout<<"\nans="<<pow;
	return 0;
}
